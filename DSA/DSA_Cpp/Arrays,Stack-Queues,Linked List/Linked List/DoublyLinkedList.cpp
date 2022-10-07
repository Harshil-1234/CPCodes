//Head in linked list is same as 0 index in the array. We pass head to start traversing or checking linked list from the beginning.

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;

        //Creating a constructor
        Node(int d){
            this->data=d;
            //initially only a single node present: no previous or next node linked
            this->next=NULL;
            this->prev=NULL;
        }

        //Creating a destructor
        ~Node(){
            int val = this->data;
            if(this->next != NULL){
                delete next;
                this->next = NULL;
            }
            cout<<"Memory freed for value: "<<val<<endl;
        }

};


//Traversing a Linked List
void print(Node* &head){
    Node*temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        // cout<<"Head "<<head->data<<endl; 
        temp = temp->next;
    }
    cout<<endl;
}

//Finding length of a Linked List
int getLength(Node* &head){
    // Made a temp node to not make any change in head node
    Node* temp = head;
    int len = 0;
    while(temp!=NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtHead(Node* &head,Node* &tail,int d){
    //if empty list
    if(head==NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        //created a new node to insert the new data
        Node* temp = new Node(d);
        //linking the new node to head
        temp->next = head;
        // linking head to new node
        head->prev = temp;
        //since we inserted the new node at beginning, change the position of head
        head = temp;
    }
}

void insertAtTail(Node* &tail,Node* &head,int d){
    //if empty list
    if(tail==NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        //created a new node to insert the new data
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node* &head,Node* &tail,int position,int d){
    //if inserting at beginning
    if(position==1){
        insertAtHead(head,tail,d);
        return;
    }
    Node * temp = head;
    int cnt = 1; //count is 1 as initially we are standing on first note
    //finding (posiiton-1)th node
    while(cnt<(position-1)){
        temp = temp->next;
        cnt++;
    }

    //if inserting at end: need to update tail as well
    if(temp->next == NULL){
        insertAtTail(tail,head,d);
        return;
    }

    //creating a node to be inserted
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(int position, Node* &head,Node* &tail){

    //deleting first node:
    if(position == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;

        delete temp;
    }
    // deleting any middle node or last node
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;

        //updating tail if we deleted the last node
        if (prev->next == NULL) {
            tail = prev;
        }
        delete curr;
    }

}

int main(){
    // Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;

    print(head);

    insertAtHead(head,tail,11);
    print(head);
    cout<<"head: "<<head->data<<" "<<"tail: "<<tail->data<<endl;

    insertAtHead(head,tail,13);
    print(head);
    cout<<"head: "<<head->data<<" "<<"tail: "<<tail->data<<endl;

    insertAtHead(head,tail,8);
    print(head);
    cout<<"head: "<<head->data<<" "<<"tail: "<<tail->data<<endl;

    insertAtTail(tail,head,20);
    print(head);
    cout<<"head: "<<head->data<<" "<<"tail: "<<tail->data<<endl;

    insertAtPosition(head,tail,1,101);
    print(head);
    cout<<"head: "<<head->data<<" "<<"tail: "<<tail->data<<endl;

    insertAtPosition(head,tail,3,120);
    print(head);
    cout<<"head: "<<head->data<<" "<<"tail: "<<tail->data<<endl;

    deleteNode(1,head,tail);
    print(head);
    cout<<"head: "<<head->data<<" "<<"tail: "<<tail->data<<endl;

    deleteNode(5,head,tail);
    print(head);
    cout<<"head: "<<head->data<<" "<<"tail: "<<tail->data<<endl;

    deleteNode(3,head,tail);
    print(head);
    cout<<"head: "<<head->data<<" "<<"tail: "<<tail->data<<endl;

    cout<<"Length of Linked List: "<<getLength(head)<<endl;

    return 0;
}
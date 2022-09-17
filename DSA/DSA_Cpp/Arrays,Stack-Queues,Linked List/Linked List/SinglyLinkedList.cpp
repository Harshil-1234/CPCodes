// Implementation code
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data; 
        Node *next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }

        ~Node(){
            if(this->next != NULL){
                delete next;
                this->next = NULL;
            }
        }

};

//head has data type Node because head is a reference of the first node in a link list

void inserAtHead(Node* &head,int d){

    //for every new data value we will create a new node
    Node* temp = new Node(d);
    temp->next = head;
    head =temp;
}

void inserAtTail(Node* &tail,int d){

    //for every new data value we will create a new node
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &tail,Node* &head,int position,int d){
    //if inserting at beginning
    if(position==1){
        inserAtHead(head,d);
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
        inserAtTail(tail,d);
        return;
    }

    //creating a node to be inserted
    Node* nodeToInsert = new Node(d);

    nodeToInsert-> next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node* &head,Node* &tail){

    //deleting first node:
    if(position == 1){
        Node* temp = head;
        head = head->next;
        //memory free
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

        prev->next = curr->next;
        curr->next = NULL;
        if (prev->next == NULL) {
            tail = prev;
        }
        delete curr;
    }

}

void print(Node* &head){
    Node*temp = head;

    while(temp != NULL){
        cout<<temp->data<<" "; 
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    //Created a new node
    Node *node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    //Pointing head to the new node/entry point
    Node*head = node1; 
    Node*tail = node1; 
    print(head);

    // inserAtHead(head,12);
    inserAtTail(tail,12);
    print(head);

    // inserAtHead(head,15);
    inserAtTail(tail,15);
    print(head);

    insertAtPosition(tail,head,3,22);
    print(head);

    deleteNode(4,head,tail);
    print(head);
    cout<<"Tail: "<<tail->data<<endl;

    return 0;

}
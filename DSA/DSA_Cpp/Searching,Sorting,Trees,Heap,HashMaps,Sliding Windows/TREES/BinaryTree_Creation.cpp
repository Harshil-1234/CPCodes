#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }

};

// Creating function to create tree and link nodes to form a tree
node* BuildTree(node* root){

    cout<<"Enter the data value for NODE "<<endl;
    int data;
    cin>>data;

    root = new node(data);

    if(data == -1){
        return NULL;
    }

    // Building Tree using Recursion 
    cout<<"Enter data to be inserted to left of "<<data<<endl;
    root -> left = BuildTree(root->left);
    cout<<"Enter data to be inserted to right of "<<data<<endl;
    root -> right = BuildTree(root->right);

    return root;
}

// This function will traverse each level of binary tree and will print them until it finds NULL values
// Levels in a Binary Tree means each row consisting of nodes
// Levels start from 0,1,2,3.... and so on

// ****** Also called Breadth First Search(BFS) *********
void levelOrderTraversal(node* root){
    queue<node*>q;
    q.push(root);

    // Pushing a seperator
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            // purana level complete ho chuka hai
            cout<<endl;

            if(!q.empty()){
                // Some child nodes still remaining 
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
// ***** INORDER TRAVERSAL ******
/*
LNR: Move to left side unless find a NULL
     if came back to same node print it
     then move to right of that node unless find a NULL
*/
void inorder(node* root){
    // base case
    if(root == NULL){
        return;
    }

    //moving to left side
    inorder(root->left);
    cout<<root->data<<" ";
     //moving to right side
    inorder(root->right);
    // cout<<root->data<<" ";
}

//****** PREORDER TRAVERSAL ********
/*
NLR: print the node
     Move to left side unless find a NULL
     then move to right of that node unless find a NULL
*/
void preorder(node* root){
    // base case
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    //moving to left side
    preorder(root->left);
     //moving to right side
    preorder(root->right);
    // cout<<root->data<<" ";
}

//****** POSTORDER TRAVERSAL ********
/*
LRN: Move to left side unless find a NULL
     then move to right of that node unless find a NULL
     print the node on coming back on it
*/
void postorder(node* root){
    // base case
    if(root == NULL){
        return;
    }


    //moving to left side
    postorder(root->left);
    //moving to right side
    postorder(root->right);
    cout<<root->data<<" ";
}

//***** BUILDING TREE FROM LEVEL ORDER *******
void buildTreefromLevelOrder(node* &root){
    queue<node*>q;
    cout<<"Enter data for root"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"Enter left node data for "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData != -1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter right node data for "<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData != -1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

int main(){
    node* root = NULL;

    //Creating TREE using buildTreefromLevelOrder
    buildTreefromLevelOrder(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    // Creating a TREE
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // root = BuildTree(root);

    //level order traversal output
    cout<<endl<<"Printing the Level Order Traversal"<<endl;
    levelOrderTraversal(root);

    // inorder traversal output
    // cout<<endl<<"Printing the Inorder Order Traversal"<<endl;
    // inorder(root);

    // preorder traversal output
    // cout<<endl<<"Printing the Pre - Order Traversal"<<endl;
    // preorder(root);

    // postorder traversal output
    // cout<<endl<<"Printing the Post - Order Traversal"<<endl;
    // postorder(root);
    // return 0;
}
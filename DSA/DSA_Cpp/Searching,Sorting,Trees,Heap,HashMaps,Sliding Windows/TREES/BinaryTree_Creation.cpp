#include<bits/stdc++.h>
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

//Reverse Level Order Traversal
void RevlevelOrderTraversal(node* root){
    stack<node*>s;
    queue<node*>q;
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        s.push(temp);
        
        if(temp->right){
            q.push(temp->right);
        }

        if(temp->left){
            q.push(temp->left);
        }

    }
    while (s.empty() == false){
        node* temp = s.top();
        cout << temp->data << " ";
        s.pop();
    }
}

// ***** INORDER TRAVERSAL ******
/*
LNR: Move to left side unless find a NULL
     if came back to same node print it
     then move to right of that node unless find a NULL
*/
//Recursive Method
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

//Iterative Method
void inorderIt(node*root){
    stack<node*>s;
    node* temp = root;
    while(temp!=NULL || !s.empty()){
        while(temp!=NULL){
            s.push(temp);
            temp = temp->left;

        }

        temp = s.top();
        s.pop();

        cout<<temp->data<<" ";

        temp = temp->right;
    }
}

//Morris method
void MorrisTraversalInorder(node* root){
    if(root == NULL)
        return;
    
    node* current, *predecessor;

    current = root;

    while(current!=NULL){
        if(current->left == NULL){
            cout<<current->data<<" ";
            current = current->right;
        }

        else{
            predecessor = current->left;
            while(predecessor->right && predecessor->right!=current){
                predecessor = predecessor->right;
            }

            if(predecessor->right == NULL){
                predecessor->right = current;
                current = current->left;
            }
            else{
                predecessor->right = NULL;
                cout<<current->data<<" ";
                current = current->right;
            }
        }
    }
    cout<<endl;
}

//****** PREORDER TRAVERSAL ********
/*
NLR: print the node
     Move to left side unless find a NULL
     then move to right of that node unless find a NULL
*/
//Recursive Method
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
//Iterative Method
void preorderIt(node*root){
    if(root == NULL)
        return;

    stack<node*>s;
    s.push(root);

    while(!s.empty()){
        node* temp = s.top();
        cout<<temp->data<<" ";
        s.pop();

        if(temp->right)
            s.push(temp->right);

        if(temp->left)
            s.push(temp->left);

    }
}
//****** POSTORDER TRAVERSAL ********
/*
LRN: Move to left side unless find a NULL
     then move to right of that node unless find a NULL
     print the node on coming back on it
*/
//Recursive Method
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
//Iterative Method
void postorderIt(node*root){
    if(root == NULL){
        return;
    }
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

    cout<<endl<<"Printing the Reverse Level Order Traversal"<<endl;
    RevlevelOrderTraversal(root);

    // inorder traversal output
    // cout<<endl<<"Printing the Inorder Order Traversal"<<endl;
    // inorder(root);
    // cout<<endl<<"Printing the Inorder Order Traversal Iterative Method"<<endl;
    // inorderIt(root);
    // cout<<endl<<"Printing the Inorder Order Traversal Morris Method"<<endl;
    // MorrisTraversalInorder(root);

    // preorder traversal output
    // cout<<endl<<"Printing the Pre - Order Traversal"<<endl;
    // preorder(root);
    // cout<<endl<<"Printing the Pre - Order Traversal Iterative Method"<<endl;
    // preorderIt(root);

    // postorder traversal output
    // cout<<endl<<"Printing the Post - Order Traversal"<<endl;
    // postorder(root);
    // cout<<endl<<"Printing the Post - Order Traversal Iterative Method"<<endl;
    // postorderIt(root);
    // return 0;
}
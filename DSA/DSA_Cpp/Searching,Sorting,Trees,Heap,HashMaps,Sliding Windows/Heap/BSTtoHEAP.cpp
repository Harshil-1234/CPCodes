#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

    Node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

Node*root = NULL;

Node* insertInTree(Node*&root , int val){
    if(root == NULL){
        root = new Node(val);
        return root;
    }

    if(val>root->data){
        //send it to right part
        root->right = insertInTree(root->right,val);
    }

    if(val<root->data){
        //send it to right part
        root->left = insertInTree(root->left,val);
    }
    return root;
}

//taking input of data from user
void takeInput(Node*&root){
    int data;
    cin>>data;

    while(data!=-1){
        root = insertInTree(root,data);
        cin>>data;
    }
}

void InorderTraversal(Node*root,vector<int>&inorder){
    if(root == NULL){
        return;
    }
    InorderTraversal(root->left,inorder);
    inorder.push_back(root->data);
    InorderTraversal(root->right,inorder);

}

void BSTtoHEAP(Node*&root,vector<int>&inorder,int&index){
    //doing preorder traversal to create a heap from a BST
    if(root == NULL){
        return;
    }

    root->data = inorder[index++];

    BSTtoHEAP(root->left,inorder,index);
    BSTtoHEAP(root->right,inorder,index);
}

void levelOrderTraversal(Node* root){
    if(root == NULL)
        return;
    queue<Node*>q;
    q.push(root);

    // Pushing a seperator
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
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

int main(){
    cout<<"Creating a BST"<<endl;
    takeInput(root);

    cout<<"Tree Created"<<endl;
    levelOrderTraversal(root);

    vector<int>inorder;

    InorderTraversal(root,inorder);

    for (auto i : inorder)
    {
        cout<<i<<" ";
    }cout<<endl;
    
    int i=0;
    BSTtoHEAP(root,inorder,i);

    cout<<"Min-Heap Created"<<endl;
    levelOrderTraversal(root);

    return 0;
}
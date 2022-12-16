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

//Traversal Code
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
void inorder(Node* root){
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

//Inserting in the tree code
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

//search a node in tree
bool searchNode(Node*&root,int key){
    if(root == NULL)
        return 0;
    
    if(root->data == key){
        return 1;
    }

    if(key>root->data){
        return searchNode(root->right,key);
    }

    if(key<root->data){
        return searchNode(root->left,key);
    }
    return 0;
}

//find minimum and maximum value in a tree
Node* minVal(Node*root){
    Node*temp = root;

    while(temp->left!=NULL)
        temp = temp->left;
    
    return temp;
}
Node* maxVal(Node*root){
    Node*temp = root;

    while(temp->right!=NULL)
        temp = temp->right;
    return temp;
}

//deleting a node from the tree
Node* deleteFromBST(Node*root,int val){
    //base case
    if(root == NULL)
        return root;
    
    if(root->data == val){
        //deletion logic
        // nodeTodelete have
        //0 child
        if(root->left==NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        //1 child
            //left child
            if(root->left!=NULL && root->right == NULL){
                Node* temp = root->left;
                delete root;
                return temp;
            }
            //right child
            if(root->left==NULL && root->right != NULL){
                Node* temp = root->right;
                delete root;
                return temp;
            }
        //2 child
        if(root->left!=NULL && root->right != NULL){
            //Option 1 -> right subtree mei se minimum value lao
            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = deleteFromBST(root->right,mini);
            return root;

            //Option 2 -> left subtree mei se maximum value lao
            // int maxx = maxVal(root->left)->data;
            // root->data = maxx;
            // root->left = deleteFromBST(root->left,maxx);
            // return root;
        }
    }
    else if(root->data < val){
        root->right = deleteFromBST(root->right,val);
        return root;
    }
    else{
        root->left = deleteFromBST(root->left,val);
        return root;
    }
}
int main(){
    Node*root = NULL;

    // 10 7 5 9 15 14 17 16 19 -1
    // 70 60 90 50 65 64 67 -1
    // 50 20 70 10 30 90 110 -1
    cout<<"Enter data to be inserted in the tree"<<endl;
    takeInput(root);

    cout<<"The Tree created is"<<endl;
    levelOrderTraversal(root);
    cout<<"Printing Inorder"<<endl;
    inorder(root);
    // cout<<"Enter the key value to be searched in the tree"<<endl;
    // int key;
    // cin>>key;
    // if(searchNode(root,key)){
    //     cout<<"The given key is present"<<endl;
    // }
    // else{
    //     cout<<"Given key is not present"<<endl;
    // }

    // cout<<endl<<"The Minimum and Maximum Value in tree is"<<endl;
    // Node*min = minVal(root);
    // Node*max = maxVal(root);
    // cout<<"Minimum: "<<minVal(root)->data<<" "<<"Maximum: "<<maxVal(root)->data<<endl;

    cout<<endl<<"Enter the value to be deleted"<<endl;
    int key;
    cin>>key;
    root = deleteFromBST(root,key);
    cout<<endl;
    cout<<"Printing Level Order"<<endl;
    levelOrderTraversal(root);
    cout<<"Printing Inorder"<<endl;
    inorder(root);

    return 0;
}
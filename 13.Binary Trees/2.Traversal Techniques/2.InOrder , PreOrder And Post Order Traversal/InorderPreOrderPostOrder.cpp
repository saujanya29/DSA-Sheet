#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;


class Node{
   
     public:
     int data ;
     Node* left;
     Node* right;

     public:
     // constructor
     Node(int data){
        this -> data = data;
        this -> left = NULL;
        this->right = NULL;
     }
};

Node * BuildTree(Node* root){

    cout<<"Enter the data "<<endl;
    int data;
    cin>>data;

    root = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"enter the data for the left node of tree :"<<data <<endl;

    root -> left = BuildTree(root -> left );

    cout<<"enter the data for the right node of tree : "<<data<<endl;

    root -> right = BuildTree(root ->right);

   return root;


}
//LNR Traversal
void Inorder(Node* root){
    // base case
    if(root == NULL){
        return ;
    }
   
    Inorder(root -> left);
    cout<<root -> data<<" ";
    Inorder(root->right);

}

// NLR Traversal
void PreOrder(Node* root){
    // base case
    if(root == NULL){
        return ;
    }

    cout<<root-> data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}

void PostOrder(Node* root){
    // base case
    if(root == NULL){
        return;
    }

    PostOrder(root-> left);
    PostOrder(root -> right);
    cout<<root-> data<<" ";
}

int main(){

    
Node * root = NULL;
root = BuildTree(root);
cout<<"Inorder Traversal:";
Inorder(root);
cout<<endl;

cout<<"PreOrder Traversal:";
PreOrder(root);
cout<<endl;

cout<<"PostOrder Traversal:";
PostOrder(root);
cout<<endl;

//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

}

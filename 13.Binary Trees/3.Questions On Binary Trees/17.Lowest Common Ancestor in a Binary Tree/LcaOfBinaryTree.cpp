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

//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
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

 //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here 
       // if first node is null
       if(root == NULL){
           return NULL;
       }
       
       // we find our nodes whose lca to be found
       if(root ->data == n1 || root -> data == n2){
           return root;
       }
       
       // check left and right nodes of root
       Node* leftAns = lca(root->left,n1,n2);
       Node* rightAns = lca(root->right,n1,n2);
       
       // if left and right both are non null means root is our lca
       if(leftAns != NULL && rightAns!=NULL){
           return root;
       }
       // if left right is null and left is non null then return left
       else if(leftAns != NULL && rightAns==NULL){
           return leftAns;
       }
       else if(leftAns == NULL && rightAns!=NULL){
            return rightAns;
       }
       // if both left and right are null then return null
       else{
            return NULL;
       }
       
    }
    

int main(){

    

}

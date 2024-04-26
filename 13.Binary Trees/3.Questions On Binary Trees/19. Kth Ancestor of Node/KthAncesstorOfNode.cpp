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


Node* Solve(Node* root ,int k ,int node){
    
    // base case
    if(root ==NULL){
        return NULL;
    }
    
    if(root ->data == node){
        return root;
    }
    // first find the node whose ancester needed to find in left and right part
    Node* leftAns =  Solve(root->left,k,node);
    Node* rightAns = Solve(root->right,k,node);
    
    // if left part is not null means node is found and present in left part
    if(leftAns != NULL && rightAns == NULL){
        // decreament k and check is it now kth ancestor or not by (k<=0) - dry run to understand
        k--;
        if(k<=0){
            k = INT_MAX;
            return root;
        }
        return leftAns;
    }
     // if right part is not null means node is found and present in right part
    if(leftAns == NULL && rightAns != NULL){
        // decreament k and check is it now kth ancestor or not by (k<=0) - dry run to understand
        k--;
        if(k<=0){
            k = INT_MAX;
            return root;
        }
        return rightAns;
    }
     return NULL;
    
}



// your task is to complete this function
int kthAncestor(Node *root, int k, int node) 
{
    // Code here
    Node * Ans = Solve(root,k,node);
    // if root node is itself node then return -1 (because k>=1) so  a node can not ne its own ancestor
    if(Ans == NULL || Ans->data == node){
        return -1;
    }else{
        return Ans ->data;
    }
    
}


int main(){

    

}

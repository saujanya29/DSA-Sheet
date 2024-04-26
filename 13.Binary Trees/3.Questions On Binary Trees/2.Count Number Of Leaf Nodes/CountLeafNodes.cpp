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

void Inorder(Node * root , int &count){

    if(root == NULL){
        return ;
    }

    Inorder(root->left,count);
    // when we reach node just increase the count 
    if((root-> left == NULL) && (root->right ==NULL)){
        count++;
    }
    Inorder(root->right,count);
    
}


int NoOfLeafNodes(Node* root){
    int count  = 0 ;
    Inorder(root,count);
    return count;
}

int main(){

Node * root = NULL;
BuildTree(root);
//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
cout<<"Leaf Nodes :"<<NoOfLeafNodes(root)<<endl;


}

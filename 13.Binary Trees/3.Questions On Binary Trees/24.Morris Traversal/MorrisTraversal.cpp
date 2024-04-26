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

void MorrisTraversal(Node*root){

if(root == NULL){
    return;
}

Node* Curr = root;

while(Curr!=NULL){

// if left does not exist then just print the Node and move to right
if(Curr->left == NULL){
  cout<<Curr->data<<" ";
  Curr = Curr ->right;
}

else{
    // if left exist then find the inorder predecessor of curr 
    // Inorder Predecessor : RightMost Node of Left Node of curr

    Node* Pred =  Curr->left;
    while(Pred->right != NULL && Pred->right != Curr){
        Pred = Pred -> right;
    }

    // Then Create A link By Making Curr as Predecessor's right
    if(Pred->right == NULL){
        Pred->right = Curr;
    }
    // Removal of temp link created in the above the if condition  
    // Printing the Current Node and moving it to right node
    else{
       Pred ->right = NULL;
       cout<<Curr->data<<" ";
       Curr = Curr->right;
    }
    
}

}


}

int main(){

    Node * root = NULL;
    BuildTree(root);
    MorrisTraversal(root);

}

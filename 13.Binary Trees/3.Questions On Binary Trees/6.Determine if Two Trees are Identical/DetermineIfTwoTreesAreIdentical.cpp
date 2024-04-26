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

    bool isIdentical(Node *r1, Node *r2)
    {
        //Your Code here
        //check for both tree being empty
        if(r1 == NULL && r2 ==NULL){
            return true;
        }
        // chk left tree is being empty
        if(r1 ==NULL && r2 !=NULL){
            return false;
        }
        //chk right tree is being empty
        if(r1 !=NULL && r2 ==NULL){
            return false;
        }
        
        // when both left and right is non empty
        bool left = isIdentical(r1->left,r2->left);
        bool right = isIdentical(r1->right,r2->right);
       
        // chk current node of both tree is identical or not
        bool rootnode  = r1->data == r2->data;
        // return ans
        return left&&right&& rootnode;
    }


int main(){

    Node* root1 = NULL;
    Node* root2 = NULL;

    BuildTree(root1);
    BuildTree(root2);

   cout<<isIdentical(root1,root2)<<endl;




}

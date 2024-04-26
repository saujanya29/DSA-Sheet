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

pair<bool,int> SumTree(Node* root){
       // empty tree is sum tree
       // make pair and return true and store sum as 0
        if(root == NULL){
            pair<bool,int> p = make_pair(true,0);
            return p;
        }
        
        if(root -> left == NULL && root -> right == NULL){
            // leaf node
            pair<bool,int> p = make_pair(true,root->data);
            return p;
        }
        // check left and right subtree is 
        pair<bool,int> leftSum  = SumTree(root->left);
        pair<bool,int> rightSum = SumTree(root->right);
        
        pair<bool,int> ans;
        
        
        bool IsLeftSumTree = leftSum.first;
        bool IsRightSumTree = rightSum.first;
        
        bool cond = (leftSum.second +rightSum.second) == root->data;
        // if left and right subtree is sum tree then check for this node 
        if(IsLeftSumTree && IsRightSumTree && cond){
            ans.first = true;
            ans.second = (leftSum.second +rightSum.second) + root->data;
        }
        else{
            // else return false
            ans.first = false;
        }
        
        return ans;
    
}       
         

int main(){

    

}

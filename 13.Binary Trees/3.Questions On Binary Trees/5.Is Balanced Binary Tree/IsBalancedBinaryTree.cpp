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
    pair<bool,int> IsBalancedFast(Node* root){

        // if node is null it is considered as balanced tree
         
         if(root == NULL){
            pair<bool,int> p = make_pair(true,0);
            return p;
        }
        // check left and right tree is balanced or not
        pair<bool,int> left = IsBalancedFast(root->left);
        pair<bool,int> right = IsBalancedFast(root->right);
        
        pair<bool,int> ans;
        
        // condition to chk this node is balanced or not 
        bool chk = abs(left.second - right.second) <= 1;
        // store true in ans if all cond are tree
        ans.first = left.first && right.first && chk ;
        // updating height
        ans.second = max(left.second,right.second)+1;
        
        return ans ;
        
    }
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        //  Your Code here
        return IsBalancedFast(root).first;
       
    }


int main(){

    Node* root = NULL;
    BuildTree(root);
    cout<< isBalanced(root);

}

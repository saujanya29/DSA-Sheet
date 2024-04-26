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

 
 pair<int,int> Solve(Node* root){
     
      if(root ==NULL){
           
            pair<int,int> p = make_pair(0,0);
            return p;
        }
        
        pair<int,int> left = Solve(root->left);
        pair<int,int> right = Solve(root ->right);
        
        pair<int,int> ans;
         // store pair in which first store sum including it and second store with including it
         // dry run for better understanding
        ans.first = root -> data + left.second+right.second;
        ans.second =  max(left.first ,left.second) + max(right.first,right.second);
        
        return ans;
     
 }
    //Function to return the maximum sum of non-adjacent nodes.
    int getMaxSum(Node *root) 
    {
        // Add your code here
        pair<int,int> p = Solve(root);
        return max(p.first,p.second);
    }

int main(){

    

}

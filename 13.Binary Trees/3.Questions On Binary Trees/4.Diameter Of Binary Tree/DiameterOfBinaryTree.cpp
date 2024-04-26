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


int Height(Node* &root){

   // base case
        if(root == NULL){
            return 0;
        }
        
        // Recursive Call
        int h1 = Height(root->left);
        int h2 = Height(root->right);
        
        return max(h1,h2)+1;
}


//Appraoch 1 : O(n2) 
int diameter(Node* root){
    if(root == NULL){
        return 0;
    }

    int op1 = diameter(root ->left);
    int op2 = diameter(root ->right);
    int op3= Height(root -> left)+Height(root->right)+1;

    return max(op1,op2,op3);
}


// Approach 2: Using Pair Data sturcture to store dia and height at same time so to reduce T.C. -> O(n)


      pair<int,int> DiameterFast(Node* root){
          // base case
          // when node is null make pair of dia and height as (0,0)
        if(root == NULL){
            pair<int,int> p = make_pair(0,0);
            return p;
        }
        // find left dia and right dia and also heights
        pair<int,int> left = DiameterFast(root->left);
        pair<int,int> right = DiameterFast(root->right);
        
        // there can be three option that can be dia ( )
        // 1. diameter of left sub tree
        // 2. diameter of right sub tree
        // 3. sum of left and right subtree height +1
        int op1 = left.first;
        int op2 = right.first;
        int op3 = left.second + right.second +1;
        
        pair<int,int> ans;
      //  max of all three is selected as potential dia
        ans.first = max(op1,max(op2,op3));
        // updating height
        ans.second = max(left.second,right.second)+1;
        
        return ans;
    }




int Diameter(Node * root){
   
   return DiameterFast(root).first;
}




int main(){

    Node * root = NULL;
    BuildTree(root);
  cout<<  Diameter(root)<<endl;

}

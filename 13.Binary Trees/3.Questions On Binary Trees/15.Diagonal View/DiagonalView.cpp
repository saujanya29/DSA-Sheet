#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<queue>
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

// Code for Diagonal View

vector<int> diagonal(Node *root)
{
   // your code here
   queue<Node*> q;
   vector<int> ans;
   
   if(root == NULL){
       return ans;
   }
   
   q.push(root);
   
   while(!q.empty()){
       Node* FrontNode = q.front();
       q.pop();
       // Do Dry Run and will get to know why this working 
       while(FrontNode){
           // Left Node is present then push in queue (this to store next level nodes left node of this Curr lvl nodes )
           if(FrontNode->left) q.push(FrontNode->left);
           // store Curr Node in ans
           ans.push_back(FrontNode ->data);
           // Move to right Node (this will print the right node of levl first)
           FrontNode = FrontNode->right;
       }
   }
   return ans;
  
}

int main(){

    

}

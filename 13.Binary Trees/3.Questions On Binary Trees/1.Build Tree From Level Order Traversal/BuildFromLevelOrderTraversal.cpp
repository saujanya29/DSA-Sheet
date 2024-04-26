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

void BuildFromLevelOrderTraversal(Node* root){

  queue<Node*>q;
 cout<<"Enter Data For Root"<<endl;
  int data;
  cin>>data;

  root  = new Node(data);
  q.push(root);

  while(!q.empty()){
    
    Node* temp = q.front();
    q.pop();

  cout<<"enter Left Node for :"<<temp->data<<endl;

  int leftData;
  cin>>leftData;

  if(leftData != -1){
    temp -> left = new Node(leftData);
    q.push(temp->left);
  }

  cout<<"enter right Node for :"<<temp->data<<endl;

  int RightData;
  cin>>RightData;

  if(RightData != -1){
    temp -> right = new Node(RightData);
    q.push(temp->right);

  }

  }
}

int main(){

Node* root = NULL;
BuildFromLevelOrderTraversal(root);

    

}

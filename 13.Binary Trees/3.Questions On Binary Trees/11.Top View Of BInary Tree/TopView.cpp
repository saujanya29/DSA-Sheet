#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<map>
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


    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
      map<int,int>TopNodes;
      queue<pair<Node*,int>> q;
      
      vector<int> ans;
      if(root == NULL){
          return ans;
      }
      
      q.push(make_pair(root,0));
      
      while(!q.empty()){
          pair<Node*,int> temp = q.front();
          q.pop();
          
          Node* FrontNode = temp.first;
          int hd = temp.second;
          
          // chech if one element is present in the map[hd] then do nothing 
          // else store the data of the node
          
          if(TopNodes.find(hd) == TopNodes.end()){ // if true means no value stored in map for this hd
              TopNodes[hd] = FrontNode ->data;
          }
          
          if(FrontNode->left){
              q.push(make_pair(FrontNode->left,hd-1));
          }
          
          if(FrontNode->right){
              q.push(make_pair(FrontNode->right,hd+1));
          }
          
      }
      
      
      // now traverse the map and store ans
      // here i is the hd and i.second is the value of data for i hd 
      for(auto i: TopNodes){
          ans.push_back(i.second);
      }
      
      return ans;
      
      
    }

int main(){

    

}

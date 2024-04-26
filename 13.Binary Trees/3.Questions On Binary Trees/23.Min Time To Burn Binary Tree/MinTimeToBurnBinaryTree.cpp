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



   //Step1: Create NodeToParent Mapping Using Level order traversal
  Node* CreateParentMapping(Node* root ,int target ,  map<Node*,Node*> &NodeToParent){
      
      Node* res = NULL;
      //Create a queue to do Level Order Traversal 
      queue<Node*>q;
      q.push(root);
      //Store parent To root node as NULL
      NodeToParent[root] == NULL;
      
      while(!q.empty()){
          Node* FrontNode = q.front();
          q.pop();
          
          // chech if Node is target node , if yes then store in res
          if(FrontNode ->data ==target){
             res = FrontNode; 
          }
          
          // Push left Node in the tree and mark its parent as Current Node (FrontNode)
          if(FrontNode ->left ){
              q.push(FrontNode->left);
              NodeToParent[FrontNode ->left] = FrontNode; 
          }
          // Push right Node in the tree and mark its parent as Current Node (FrontNode)
          if(FrontNode ->right ){
              q.push(FrontNode->right);
              NodeToParent[FrontNode ->right] = FrontNode; 
          }
      }
      return res;
  }
  
   //Step3: Burn Tree In min Time
   /*
   The basic Idea behind the Burning tree is that store nodes connected to target node in the queue
   and using iteration through for loop of size of queue , mark all Nodes in the queue as visisted and increase ans  count by 1
   and then again do for loop iteration till the queue gets empty
   */
   
   int BurnTree(Node* target, map<Node*,Node*> &NodeToParent){
       
       int ans = 0;
       // Creating map for visited 
       map<Node*,bool>Visited;

       queue<Node*>q;
       // push target node in the queue 
       q.push(target);
       Visited[target] = 1;
       
       
       while(!q.empty()){
           // create flag for checking is there any nodes pushed in the queue and marked true in visited so we can increase our count
          // marking visited means burning that node
           int flag =0;
           int size = q.size();
           
           for(int i  = 0; i<size;i++){
               Node * FrontNode = q.front();
               q.pop();
               
               // Check left node exist and mark unvisited 
               if(FrontNode->left  && !Visited[FrontNode->left]){
                   // push  in queue and mark visited 
                   flag  = 1;
                   q.push(FrontNode->left);
                   Visited[FrontNode->left] = 1;
               }
               // Check right node exist and mark unvisited 
                if(FrontNode->right  && !Visited[FrontNode->right]){
                    // push  in queue and mark visited 
                   flag  = 1;
                   q.push(FrontNode->right);
                   Visited[FrontNode->right] = 1;
               }
               // check  parent node exist and mark unvisited
               if(NodeToParent[FrontNode]  && !Visited[NodeToParent[FrontNode]]){
                   // push  in queue and mark visited 
                    flag =1;
                    q.push(NodeToParent[FrontNode]);
                    Visited[NodeToParent[FrontNode]] = 1;
               }
               
           }
           // coming to here means if any nodes connected to frontnodes will be burned 
           //then our flag will be 1 so we will increase our ans count
             if(flag == 1){
               ans++;
              }
       }

       return ans;
   }
  
  
  
  
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        
        //Step1: Create NodeToParent Mapping
         map<Node*,Node*>NodeToParent;
        //Step2: Find Target Node
        Node* Target = CreateParentMapping(root,target,NodeToParent);
        //Step3: Burn Tree In min Time
        int minTime = BurnTree(Target,NodeToParent);
        
        return minTime;
    }
    

int main(){

    

}

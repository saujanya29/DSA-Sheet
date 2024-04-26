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


  //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        //Your code here
        // creating map horizontal distance(hd) and level of the nodes 
        map<int,map<int,vector<int>>> nodes;
        queue<pair<Node*,pair<int,int>>> q;
        
        vector<int> ans;
        
        if(root == NULL){
            return ans;
        }
        
        q.push(make_pair(root,make_pair(0,0)));
        
        while(!q.empty()){
           pair<Node*,pair<int,int>> temp = q.front();
           q.pop();
           
           Node* FrontNode = temp.first;
           // storing hd and lvl of node
           int hd = temp.second.first;
           int lvl = temp.second.second;
           // push the data of node for the this hd and lvl 
           nodes[hd][lvl].push_back(FrontNode-> data);
           // insert left and right nodes in the queue
           if(FrontNode->left){
               q.push(make_pair(FrontNode->left,make_pair(hd-1,lvl+1)) );
           }
           if(FrontNode->right){
               q.push(make_pair(FrontNode->right,make_pair(hd+1,lvl+1)) );
           }
            
        }
        
        // in maps the elements are in sorted manner
        
        // this i will iterate over horizontal distance in sorted manner
        for(auto i : nodes){
            //this j will iterate over level for i horizontal distance in sorted manner
            for(auto j: i.second){
                // this will iterate the vector element of level j and horinzontal distance i
                for(auto k : j.second){
                    // then push back the elements stored in vec to our ans 
                    ans.push_back(k);
                }
            }
        }
        return ans;
    }

int main(){

    

}

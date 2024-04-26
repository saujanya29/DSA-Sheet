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



    vector <int> bottomView(Node *root) {
        // Your Code Here
        
        map<int,int>BottomNode;
        queue<pair<Node*,int>>q;
        
        vector<int> ans;
        if(root ==NULL){
            return ans;
        }
        
        q.push(make_pair(root,0));
        
        while(!q.empty()){
            pair<Node*,int> temp = q.front();
            q.pop();
            
            Node* FrontNode  = temp.first;
            int hd = temp.second;
            
            // the only that is different from top view is here we are not
            // checking that is there any data present for the this hd and 
            // jusst pushing it so that later in the traversal get stored in the map
            
            BottomNode[hd] = FrontNode->data;
            
            if(FrontNode->left){
                q.push(make_pair(FrontNode ->left,hd-1));
            }
            
            if(FrontNode->right){
                q.push(make_pair(FrontNode ->right,hd+1));
            }
        }
        
        // Store the Bottom nodes from the map
        for(auto i:BottomNode){
            ans.push_back(i.second);
        }
        
        return ans;
        
  
    }

int main(){

    

}

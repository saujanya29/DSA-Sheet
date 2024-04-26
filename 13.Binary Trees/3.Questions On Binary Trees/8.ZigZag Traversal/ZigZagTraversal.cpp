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


    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector<int> result;
    	// if tree is empty return ans;
    	if(root == NULL){
    	    return result;
    	}
    	
    	// push root in queue
    	queue<Node*> q;
    	q.push(root);
    	
    	// intialising direction
    	bool LeftToRight  = true;
    	
    	while(!q.empty()){
    	   // find size of quue
    	   int size = q.size();
    	   // create vector of size of queue
    	   vector<int> ans(size);
    	   
    	   // find the element in the queue and store in ans 
    	   for(int i = 0 ; i<size ;i++){
    	       // string front node
    	       Node * FrontNode = q.front();
    	       q.pop();
    	   
    	       //chk  direction in we need to store the ans
    	       int index  = LeftToRight ? i:size-i-1;
    	       ans[index] = FrontNode -> data;
    	       
    	       // push the left and right node of the curr node in queue for further traversal
    	       if(FrontNode -> left ){
    	           q.push(FrontNode -> left);
    	       }
    	       if(FrontNode -> right ){
    	           q.push(FrontNode -> right);
    	       }
    	       
    	   }
    	   // revert the dir after first after loop end 
    	   LeftToRight = !LeftToRight;
    	   // here curr level element will be stored in zigzag manner
    	   for(auto x : ans){
    	       result.push_back(x);
    	   }
    	   
    	}
    	// after queue get empty then result result 
    	return result;
    }

int main(){

    Node* root =NULL;
    BuildTree(root);
vector<int> ans  = zigZagTraversal(root);
for(int i = 0 ; i<ans.size(); i++){
     cout<<ans[i]<<" ";
}


}

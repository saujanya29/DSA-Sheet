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


 void TraverseLeft(Node * root , vector<int> &ans){
       
       // base case
       if(root == NULL || (root->left == NULL && root -> right == NULL) ){
           return;
       }
       
       ans.push_back(root-> data);
       
       if(root-> left){
           TraverseLeft(root->left,ans);
       }
       else{
           TraverseLeft(root-> right,ans);
       }
   
   }
   
   
   void TraverseLeaf(Node* root , vector<int> &ans){
       
       if(root == NULL){
           return ;
       }
       
       if(root-> left == NULL && root-> right == NULL){
           ans.push_back(root->data);
           return;
       }
       
        TraverseLeaf(root-> left,ans);
        TraverseLeaf(root-> right,ans);
       
   }
   
   void TraverseRight(Node * root ,vector<int> & ans){
       
       if(root == NULL || (root-> left == NULL && root-> right == NULL)){
           return ;
       }
       
       if(root->right){
           TraverseRight(root-> right, ans);
       }
       else{
           TraverseRight(root-> left,ans);
       }

       ans.push_back(root-> data);
       
   }
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int> ans;
        
        if(root == NULL){
            return ans;
        }
        
        ans.push_back(root->data);
        
        // left part Traverse kro
        TraverseLeft(root-> left,ans);
        
        // leaf nodes ko traverse kro
        TraverseLeaf(root->left,ans);
        TraverseLeaf(root->right,ans);
        
        // right Nodes ko Traverse kro
        
        TraverseRight(root->right,ans);
        
        return ans;
    }

/*
Reason: in cases for eg. when we have only right subtree then when we will first traverse left it will store all
the nodes right to root tree (considering we are passing root only in traverse left and not storing root node 
prior to it ) so when we traerse right it will again store all the nodes in reverse order so there is duplicate printing 
so to avoid this what we will do is store root in the first place then call traverse left fucntion for left node and because we have
already stored root node so if we call the traverse leaf function with passing root in it then it will store the root element twice in some cases to 
avoid this what we will do is find leaf nodes for left and right part seperately and then after will call our traverse right which will eventualy complete our output 
*/


int main(){

Node* root =NULL;
BuildTree(root);
vector<int> ans  = boundary(root);
for(int i = 0 ; i<ans.size(); i++){
     cout<<ans[i]<<" ";
}




    

}

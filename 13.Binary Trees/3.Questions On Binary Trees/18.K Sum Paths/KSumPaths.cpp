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


  
    void Solve ( Node * root , vector<int>path,int k ,int &count){
        
        if(root== NULL){
            return;
        }
        // push the curr node
        path.push_back(root->data);
        
        // push the left and right nodes in path vector
        Solve(root->left,path,k,count);
        Solve(root->right,path,k,count);
        
        // while returning check if there any sum == k possible
        int size= path.size();
        int sum  = 0 ;
        for(int i =size-1;i>=0;i--){
            sum+=path[i];
            if(sum == k){
                // if found increase the count
                count++;
            }
        }
        // remove the curr node data from the path vector
        // so that it can search in other paths too
        path.pop_back();
        
    }
    
     
    int sumK(Node *root,int k)
    {
        // code here 
        int count = 0;
        vector<int>path;
        Solve(root,path,k,count);
        return count;
    }

int main(){

    

}

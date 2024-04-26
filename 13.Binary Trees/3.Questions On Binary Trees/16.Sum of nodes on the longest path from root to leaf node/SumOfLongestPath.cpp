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

// Approach 1 : Function to find sum of the longest path from the root to leaf node(using pair data structure)

    pair<int,int> Solve(Node*root){
        
        //base case
         if(root ==  NULL){
            pair<int,int> p = make_pair(0,0);
            return p;
        }
        
        pair<int,int> left = Solve(root->left);
        pair<int,int> right = Solve(root->right);
        
        pair<int,int> ans;
        
        if(left.second == right.second){
            ans.first =  root->data + max(left.first,right.first);
        }
        else if(left.second < right.second){
              ans.first = root->data + right.first;
        }else{
            ans.first = root->data + left.first;
        }
        
         ans.second = max(left.second,right.second)+1;
        
        return ans;
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        return Solve(root).first;
        
    }
    
//Approach 2: Another approach using variables

  void Solve(Node * root , int sum , int &maxSum , int len ,int &maxLen){
        if(root == NULL){
            if(len > maxLen ){
                maxLen = len;
                maxSum = sum;
            }else if(len == maxLen){
                maxSum = max(sum , maxSum);
                
            }
            return ;
        }
        
        sum = sum + root -> data;
        Solve(root -> left, sum, maxSum, len+1,maxLen);
        Solve(root -> right, sum, maxSum, len+1,maxLen);
        return;
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        int sum = 0 ;
        int len = 0 ;
        int maxSum = 0;
        int maxLen = 0;
        
        Solve(root, sum, maxSum, len, maxLen);
        return maxSum;
    }




int main(){

    

}

#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<map>
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


//Function to return a tree created from postorder and inoreder traversals.
/*
    // Method 1 to Find Index of Element In the Inorder
    int FindPosition(int in[],int element , int n){
        for(int i = 0 ;i<n;i++){
            if(in[i] == element){
                return i;
            }
        }
        return -1;
    }
    */
    
    
    // method 2: to find Index of The element in the Inoder using maps
    void CreateMapping(int in[],int n , map<int,int> &NodeToIndex){
        
        for(int i =0;i<n;i++){
            NodeToIndex[in[i]] = i;
        }
    }
    
    
    Node* solve(int in[],int post[],int &index ,int InorderStart,int InorderEnd, int n,map<int,int>&NodeToIndex){
        // base case 
        //check either PostorderIndex have reached to less than 0
        // InorderStart is greater than InorderEnd (if yes means array there is no node in left or right)
        if(index<0 || InorderStart >InorderEnd ){
            return NULL;
        }
        
        // find root element in the postOrder(also decreament the index)
        int element = post[index--];
        // Create root node for element
        Node* root = new Node(element);
        
        // find Position  of element in the inOrder
        // there can be two way to find postion in the array 
        
        // 1.By using Linear Search (overall T.C Will be O(n2)) , may Give TLE
        //int position = FindPosition(in,element,n);
        
        //2. By storing index in the map(overall T.C Will be O(n))
        int position = NodeToIndex[element];
        
        
        // create Left and Right Subtree(as postorder so right tree will be formed first)
        // In Right Subtree Pass Inorder start As position+1  and InorderEnd Index as InorderEnd
        root -> right = solve(in,post,index,position+1,InorderEnd,n,NodeToIndex);
        // In left Subtree Pass Inorder start As 0 and InorderEnd Index as (index of element -1)
        root -> left = solve(in,post,index,InorderStart,position-1,n,NodeToIndex);
        
        // Then Return Root node
        return root;
    
    }
    
    
    
    
    
    
    Node* buildTree(int in[],int post[], int n)
    {
        // Code here
        
        int PostOrderIndex = n-1;
        map<int,int>NodeToIndex;
        
        CreateMapping(in,n,NodeToIndex);
        Node * ans = solve(in,post,PostOrderIndex,0,n-1,n,NodeToIndex);
        return ans;
    }




int main(){

    

}

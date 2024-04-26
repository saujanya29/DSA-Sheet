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


  
    // Method 1 to Find Index of Element In the Inorder
    int FindPosition(int in[],int element ,int InOrderStart , int InorderEnd){
        for(int i = InOrderStart ;i<=InorderEnd;i++){
            if(in[i] == element){
                return i;
            }
        }
        return -1;
    }
     
    /*
    // method 2: to find Index of The element in the Inoder using maps
    void CreateMapping(int in[],int n , map<int,int> &NodeToIndex){
        
        for(int i =0;i<n;i++){
            NodeToIndex[in[i]] = i;
        }
    }
     */
    
    Node* solve(int in[],int pre[],int &index ,int InorderStart,int InorderEnd, int n){
        // base case 
        //check either PostorderIndex have reached to end or 
        // InorderStart is greater than InorderEnd (if yes means array there is no node in left or right)
        if(index>=n || InorderStart >InorderEnd ){
            return NULL;
        }
        
        // find root element in the preOrder
        int element = pre[index++];
        // Create root node for element
        Node* root = new Node(element);
        
        // find Position  of element in the inOrder
        // there can be two way to find postion in the array 
        
        // 1.By using Linear Search (overall T.C Will be O(n2)) , may Give TLE
        int position = FindPosition(in,element,InorderStart,InorderEnd);
        
        //2. By storing index in the map(overall T.C Will be O(n)) - Wrong ans for duplicates
        // int position = NodeToIndex[element];
        
        
        // create Left and Right Subtree 
        // In left Subtree Pass Inorder start As 0 and InorderEnd Index as (index of element -1)
        root -> left = solve(in,pre,index,InorderStart,position-1,n);
       // In Right Subtree Pass Inorder start As position+1  and InorderEnd Index as InorderEnd
        root -> right = solve(in,pre,index,position+1,InorderEnd,n);
        
        // Then Return Root node
        return root;
    
    }
    
    
    
    
    
    
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        
        int PreOrderIndex = 0;
        // map<int,int>NodeToIndex;
        
        // CreateMapping(in,n,NodeToIndex);
        Node * ans = solve(in,pre,PreOrderIndex,0,n-1,n);
        return ans;
    }




int main(){

    

}

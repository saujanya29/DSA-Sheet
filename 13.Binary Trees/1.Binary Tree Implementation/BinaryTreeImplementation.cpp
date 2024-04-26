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

void LevelOrderTraversal(Node* root){

    queue<Node* > q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node * temp =  q.front();
        q.pop();
        
        // if temp is null means purana level completely traverse ho chuka h 
        if(temp == NULL){
            cout<<endl; // this will seperate levels with line break

          // if q is empty after null
            if(!q.empty()){
                q.push(NULL);
            }
        }
       
       else{
         // printing the data of temp node
        cout<< temp -> data <<" ";
       
       // pushing left node in the queue
        if(temp-> left){
        q.push(temp ->left);
       }
     
       // Pushing the right node in the queue
       if(temp -> right){
        q.push(temp-> right);
       }

       }

      
    }


} 



int main(){

Node * root = NULL;
root = BuildTree(root);

//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
//level order
cout << "Printing the level order tracersal output " << endl;
LevelOrderTraversal(root);



//1 2 3 -1 -1 4 -1 -1 5 6 -1 -1 7 -1 -1
}

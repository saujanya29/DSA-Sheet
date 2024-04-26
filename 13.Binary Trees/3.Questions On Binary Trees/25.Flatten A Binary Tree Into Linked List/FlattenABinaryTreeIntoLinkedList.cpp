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

  void flatten(Node *root)
    {  //code here
       
        Node* Curr = root;
        while(Curr!=NULL){
            if(Curr->left){
                //find the predecessor
                Node* Pred =Curr->left;
                while(Pred ->right ){
                    Pred = Pred->right;
                }
                
                // make pred's right as Curr ->right
                Pred->right = Curr->right;
                // point Curr ->right to Its left
                Curr->right = Curr->left;
                //mark left as NULL
                Curr ->left = NULL;
            }
              // move curr to next left node which is now pointed by right node
                  Curr = Curr ->right;
          
        }
    }

int main(){


    

}

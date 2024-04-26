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
    int data;
    Node* Next;

  //Constructor
   Node(int data){
    this->data = data;
    this->Next = NULL;
   }
  // Destructor

  ~Node(){
      
      int value = this -> data ;
      if(this-> Next != NULL){
        delete Next;
        this ->Next =NULL;
      }
         cout << " memory is free for node with data " << value << endl;
  }

};

void Print(Node * &Head){

    if(Head == NULL){
        cout<<"List Is Empty"<<endl;
        return;
    }

    Node * temp = Head;
    
    while(temp != NULL){

    cout<<temp -> data <<" ";
    temp = temp-> Next;

    }
  

}


 Node *getIntersectionNode(Node *&headA, Node *&headB) {
        
     // find length of both the List
     Node * tempA = headA;
     Node *  tempB = headB;
     int a =0;
     int b =0;
    
     while(tempA != NULL){
        a++;
        tempA = tempA -> Next;
     }

     while(tempB != NULL){
        b++;
        tempB = tempB -> Next;
     }

     

     if(a>b){
         for(int i = 0 ; i< (a-b);i++){
            headA = headA -> Next; 
         }
     }
     else{

        for(int i = 0 ; i< (b-a);i++){
           headB = headB -> Next;
         }  
     }

     while(headA != NULL && headB != NULL){
         if(headA  == headB){
            cout<<headA -> data <<endl;
             return headA;
         }
         headA = headA -> Next; 
         headB = headB -> Next;
     }

     
    //  return NULL;

 }

int main(){

  // creating  first list 
    Node * a1 = new Node(4);
    Node * b1 = new Node(1);
    Node * c1 = new Node(8);
    Node * d1 = new Node(4);
    Node * e1 = new Node(5);
   
   a1 -> Next = b1;
   b1 -> Next = c1;
   c1 -> Next = d1;
   d1 -> Next = e1;

  Print(a1);
  cout<<endl;
 // creating second list 
    Node * a2 = new Node(5);
    Node * b2 = new Node(6);
    Node * c2 = new Node(1);
    Node * d2 = new Node(8);
    Node * e2 = new Node(4);
     Node * f2 = new Node(5);
   
   a2 -> Next = b2;
   b2 -> Next = c2;
   c2 -> Next = d2;
   d2 -> Next = e2;
   e2 -> Next = f2;

  Print(a2);
  cout<<endl;
    

 // getting intersection node
 getIntersectionNode(a1,a2);


}

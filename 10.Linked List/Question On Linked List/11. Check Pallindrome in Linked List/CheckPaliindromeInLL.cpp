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

// Print Function 
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


// Get length

int GetLength(Node* Head){

  Node * temp = Head;
 int Len  = 0 ;
  while(temp != NULL){
   
   Len++;
   temp = temp->Next;
  }
  return Len;

}

// Get middle Node 

Node * GetMiddle(Node * Head ){

 Node * Slow =  Head;
 Node * Fast = Head -> Next;

 while(Fast != NULL && Fast -> Next != NULL) {

   Slow = Slow -> Next;
   Fast = Fast -> Next ->Next;

 }
 return Slow;
}

// Reverse The list 
Node * Reverse (Node *Head){

    Node * Prev = NULL;
    Node * Curr = Head;
    Node * Next_ = NULL;
    while(Curr != NULL){

        Next_ = Curr -> Next ;
        Curr -> Next = Prev ;
        Prev = Curr ;
        Curr = Next_;

    }
    return Prev;
}

// Checking Pallindrome List 

bool IsPallindrome(Node * Head){

   if(Head -> Next  == NULL){
    return true;
   }

  // getting middle node

   Node * Middle = GetMiddle(Head);
   Node * temp = Middle -> Next;

  // Reversing List After Middle Node 

  Middle -> Next = Reverse(temp);


   // Comparing the Both Halves

   Node * Head1 = Head;
   Node * Head2 = Middle->Next;

   while(Head2 != NULL){
     
       if(Head1 -> data != Head2 -> data){
        return false;
       }
      
         Head1 = Head1 -> Next ;
         Head2  = Head2 -> Next;
       
   }
   // Reversing list again After mid to Make it same as original list
   temp = Middle -> Next;
   Middle -> Next = Reverse(temp);

   return true;


}


int main(){

           // creating a  list 
    Node *List = new Node(1);
     
    Node * Head = List;
    Node * Tail = List;
    Tail -> Next = new Node(5);
    Tail -> Next -> Next = new Node(7);
    Tail -> Next -> Next -> Next= new Node(7);
    Tail -> Next -> Next -> Next ->Next = new Node(5);
    Tail -> Next -> Next -> Next ->Next ->Next = new Node(1);

    cout<<"Printing Linked List : " ;
    Print(Head);
    cout<<endl <<endl;

    cout<<"Printing  ReversedLinked List : " ;
    Node * Prev = Reverse(Head);
    Print(Prev);
    cout<<endl <<endl;
   
   // get Get middle node 
   cout<<"Get Middle Node :";
   Node * Ans = GetMiddle(Prev) ;
   cout<<Ans ->data<<endl;


  //  cout<<"list is Pallindrome or not" << endl;
    bool res = IsPallindrome(Prev);
    if(res == true) cout<< "list is pallindrome"<<endl;
    else cout<< "list is not pallindrome"<<endl;
  

   
   






}

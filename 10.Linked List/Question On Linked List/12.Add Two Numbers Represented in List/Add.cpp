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



/////// Solution Starts from Here

void insertAtTail(Node* &head,  Node* &tail, int val) {
        
        Node* temp = new Node(val);
        //empty list
        if(head == NULL) {
            head = temp;
            tail = temp;
            return;
        }
        else
        {
            tail -> Next = temp;
            tail = temp;
        }
    } 
    
    
 Node * Reverse (Node *head){

    Node * Prev = NULL;
    Node * Curr = head;
    Node * Next_ = NULL;
    while(Curr != NULL){

        Next_ = Curr -> Next ;
        Curr -> Next = Prev ;
        Prev = Curr ;
        Curr = Next_;

    }
    return Prev;
}
  // Function To Add Numbers represented by List
  Node* Add( Node* first,  Node* second){
       
       Node * AnsHead = NULL;
       Node * AnsTail = NULL;
       int Carry = 0;
       while(first != NULL || second != NULL || Carry != 0){
           
           int val1 = 0;
           if(first != NULL){
               val1= first -> data ;
           }
           int val2 =0;
           if(second!= NULL){
               val2 = second -> data;
           }
           
           int sum = Carry + val1+ val2;
           int digit = sum%10;
           
           // Insert At Tail 
           insertAtTail(AnsHead,AnsTail,digit);
           
           // calculating Carry
           Carry = sum/10;
           
           // Updating Pointers
           
           if(first != NULL){
            first = first -> Next;
           }
           if(second != NULL){
               second = second -> Next;
           }
       }
          
        return AnsHead;
  }
    
    
    
    //Function to add two numbers represented by linked list.
     Node* addTwoLists(Node* first, Node* second)
    {
        // code here
        if(first == NULL){
            return second;
        }
        if(second == NULL){
            return first;
        }
        
        // Step1 - Reverse Both The List
       first =  Reverse(first);
       second =  Reverse(second);
       
       // Add two List 
       Node * Ans = Add(first,second);
       
       // reverse the ans list
        Ans = Reverse(Ans);
        
        return Ans;
    }

int main(){

     Node *List1 = new Node(4);
     
    Node * Head1 = List1;
    Node * Tail1 = List1;
    Tail1 -> Next = new Node(5);
     Print(Head1);
     cout<<endl;
  



     Node *List2 = new Node(3);
     
    Node * Head2 = List2;
    Node * Tail2 = List2;
    Tail2 -> Next = new Node(4);
    Tail2 -> Next -> Next = new Node(5);

     Print(Head2);
     cout<<endl;
    

Node * Ans = addTwoLists(List1,List2);
Print(Ans);
    

}

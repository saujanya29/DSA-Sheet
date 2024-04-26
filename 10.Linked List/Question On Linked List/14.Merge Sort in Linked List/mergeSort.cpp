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

// Merge Sort 

Node * FindMid(Node* head){
 
   Node * slow = head;
   Node * fast = head ->Next;

   while(fast!=NULL && fast -> Next != NULL){
       slow = slow ->Next;
       fast = fast ->Next -> Next;
   }
   return slow;

}

Node* Merge(Node* left ,Node * right){

    if(left == NULL){
        return right;
    }
    if(right == NULL){
        return left;
    }

    Node * ans = new Node(-1);
    Node * temp = ans;

    while(left != NULL && right != NULL){
      
      if(left -> data <right -> data){
          temp-> Next = left ;
          temp = left ;
          left = left -> Next;
      }
      else{
          temp -> Next = right;
          temp = right;
          right =right -> Next;
      }

    }

    while(left!= NULL){
          temp-> Next = left ;
          temp = left ;
          left = left -> Next;
    }
    while(right != NULL){
         temp -> Next = right;
         temp = right;
         right =right -> Next;
    }

    ans = ans -> Next;
    return ans;
}

Node* mergeSort(Node *head) {
    // Write your code here.
    if(head != NULL && head -> Next == NULL){
       return head;  
    }
    
   // break linked list in two halves 
    Node * mid = FindMid(head);
    Node * left = head;
    Node * right = mid -> Next;
    mid -> Next = NULL;

    // sorting both the halves
    left = mergeSort(left);
    right = mergeSort(right);

    // merge both the sorted list 

    Node * result = Merge(left,right);

    return result;

}

int main(){

    Node *List = new Node(1);
     
    Node * Head = List;
    Node * Tail = List;
    Tail -> Next = new Node(5);
    Tail -> Next -> Next = new Node(7);
    Tail -> Next -> Next -> Next= new Node(7);
    Tail -> Next -> Next -> Next ->Next = new Node(5);
    Tail -> Next -> Next -> Next ->Next ->Next = new Node(2);

    cout<<"Printing Linked List : " ;
    Print(Head);
    cout<<endl <<endl;

    mergeSort(Head);

    cout<<"Printing Sorted Linked List : " ;
    Print(Head);
    cout<<endl <<endl;

    

}

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
    Node* arb;

  //Constructor
   Node(int data){
    this->data = data;
    this->Next = NULL;
    this->arb =NULL;
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

 void InsertAtTail(Node* &head, Node* &tail , int data){
        Node* temp = new Node(data);
        if(head == NULL){
            head = temp;
            tail = temp;
            return;
        }
        else{
            tail->Next = temp;
            tail = temp;
        }
    }

Node * CopyList(Node* head){

    // Step1 : create a clone list 
   Node* CloneHead = NULL;
   Node * CloneTail = NULL;
   Node * temp = head;
    
    while(temp != NULL){
        InsertAtTail(CloneHead,CloneTail,temp -> data);
        temp = temp -> Next ;
    }
    
    // Step2 : Add CloneNodes In Between Original Nodes 
    
    Node * OriginalNode = head;
    Node * CloneNode = CloneHead;
    
    while(OriginalNode != NULL && CloneNode != NULL){
        
         Node * Next = OriginalNode ->Next ;
         OriginalNode -> Next = CloneNode;
         OriginalNode = Next;
         
         Next = CloneNode ->Next;
         CloneNode ->Next = OriginalNode;
         CloneNode = Next;

    }
    
    // Step3 : Copy Random Pointer
    
    temp = head;
    
    while(temp!=NULL){
        
        if(temp -> Next != NULL){
            temp -> Next -> arb = temp ->arb ? temp ->arb -> Next : temp-> arb;
        }
        temp=temp->Next ->Next;
    }
    
    // Step4 : Revert Back Changes in step 2

    OriginalNode = head;
    CloneNode = CloneHead;
    
    while(OriginalNode != NULL && CloneNode != NULL){
        
        
        OriginalNode ->Next = CloneNode -> Next;
        OriginalNode = OriginalNode -> Next;
        
        if(OriginalNode != NULL){
            CloneNode ->Next = OriginalNode ->Next;
        }
        CloneNode = CloneNode -> Next;
    }
    
    // Step5 Return ans 
    return CloneHead;
    
    
    
}

int main(){

    Node * a1 = new Node(17);
    Node * b1 = new Node(15);
    Node * c1 = new Node(8);
    Node * d1 = new Node(9);
    Node * e1 = new Node(2);
    Node * f1 = new Node(4);
     Node * g1 = new Node(6);
    a1 -> Next = b1;
    b1 -> Next = c1;
    c1 -> Next = d1;
    d1 -> Next = e1;
    e1->Next = f1;
    f1->Next = g1;

  Print(a1);
  cout<<endl;

  Node * ans = CopyList(a1);
  Print(ans);

}

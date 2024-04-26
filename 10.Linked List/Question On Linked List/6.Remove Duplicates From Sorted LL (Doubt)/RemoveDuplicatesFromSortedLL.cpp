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

  // ~Node(){
      
  //     int value = this -> data ;
  //     if(this-> Next != NULL){
  //       delete Next;
  //       this ->Next =NULL;
  //     }
  //        //cout << " memory is free for node with data " << value << endl;
  // }

};

void InsertAtHead(Node* &Head,int d){

     Node * temp = new Node(d);
     
     //inserting node
     temp -> Next = Head;
     Head = temp;  // here head will point to new temp node so further insertion can be done


}

void InsertAtTail(Node* &Tail,int d){

    Node * temp = new Node(d);

    Tail -> Next = temp;
    Tail = Tail->Next;   //  OR Tail = temp; 
    

}

void InsertAtPosition( Node * Tail , Node* Head , int pos , int d ){

// if pos =1 .. insert at Head
   if(pos==1){
    InsertAtHead(Head,d);
    return;
   }
   
   
   Node * temp = Head;
   int cnt = 1;

   // iterating till one node before to inserting pos

  while(cnt < pos-1 ){   // if pos =3 , pos-1 = 2 so iterate 1 time
    temp = temp ->Next;
    cnt++;
  }  

 //inserting at Last Position
  if(temp ->Next == NULL){
    InsertAtTail(Tail,d);
    return;
  }
    
   Node * NodeToInsert = new Node(d);
   NodeToInsert -> Next = temp -> Next;
   temp -> Next =NodeToInsert ;
   
}

void DeleteNode(Node*Head,int pos){   // pos = 3 means 3rd Node
   
   // Deleting first or start Node
     if(pos == 1){
       Node * temp = Head;
       Head = Head -> Next;
        //memory free start ndoe
       temp -> Next = NULL;
       delete temp;

     }

     else{
         // deleting middle or last node
        
         Node* Curr = Head;  // this pointer will track deleting node
         Node* Prev = NULL;  // this will prev node to deleting node

         int cnt = 1;
         while(cnt<pos){  // iterate till curr node become deleting node
            Prev = Curr;
            Curr = Curr-> Next;
            cnt++;
         }

         Prev -> Next = Curr->Next;
         Curr ->Next = NULL;
         delete Curr;
     }

}

int GetLength(Node* &Head){

  Node * temp = Head;
  int Len = 0;

  while(temp != NULL){
    Len++;
    temp = temp ->Next;
  }

  return Len;
}

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







Node * removeDuplicates(Node *&head)
{
    // Write your code here
     if(head == NULL){
         return NULL;
    }
    // Non empty List
    
    Node * Curr = head;

    while(Curr != NULL){
         
         if( (Curr -> Next != NULL) && (Curr -> data == Curr -> Next ->data ) ){

             Node * NextToNext = Curr -> Next->Next;
             Node * NodeToDelete = Curr-> Next;
             delete NodeToDelete ;
             Curr -> Next = NextToNext;
         }

         else{
             Curr = Curr -> Next;

         }

    }
    

  return head;

}

int main(){

// creating a new node 
      Node *node1 = new Node(10);
      /*
      cout<<node1->data<<endl;
      cout<<node1->Next<<endl;
      */
     
     Node * Head = node1;
     Node * Tail = node1;

      InsertAtHead(Head,20);
      InsertAtHead(Head,20);
      InsertAtHead(Head,20);
      InsertAtHead(Head,20);
      InsertAtHead(Head,50);
     
    //  Print(Head);
   
     InsertAtHead(Head,50);
     InsertAtHead(Head,50);
    
    
     Print(Head);
     cout<<endl;
   
    
  Node * Ans= removeDuplicates(Head);
     Print(Ans);
     cout<<endl;
   

}

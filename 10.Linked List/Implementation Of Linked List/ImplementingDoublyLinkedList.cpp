#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Node {

    public:
    int data;
    Node* Prev;
    Node* Next;

    // constructor
    Node(int d){
        this -> data = d;
        this -> Prev =NULL;
        this -> Next = NULL;
    }

   // Destructor
   ~Node(){
     int val = this -> data ;
     if( Next != NULL){
        Next = NULL;
       delete Next;
     }
         cout << "memory free for node with data "<< val << endl;
   }

};

int GetLength(Node * &Head){

    Node * temp =Head;
    int len = 0;
    while(temp != NULL){
        len++;
       temp = temp->Next;
    }
    return len;
}

void InsertAtHead(Node* &Head,Node* &Tail,int data){

        if(Head==NULL){
            Node* temp = new Node(data);
            Head = temp;
            Tail = temp;
        }

        else{

         Node * temp = new Node(data);
         temp -> Next = Head ;
         Head ->Prev = temp;
         Head = temp;
        }
}

void InsertAtTail(Node *&Head,Node* & Tail,int data){

       if(Tail==NULL){
        Node* temp  = new Node(data);
        Tail = temp;
        Head = temp;
       }
       else{

      Node * temp = new Node(data);

      temp -> Prev = Tail;
      Tail -> Next = temp;
      Tail = temp;

       }

}

void InsertAtPosition(Node* &Head,Node*&Tail,int data, int pos){
     
     // insert at start 
    if(pos == 1){
        InsertAtHead(Head,Tail,data);
        return;
    }

    Node* temp = Head;
    int cnt = 1;

    while(cnt < pos-1){
        temp =  temp -> Next;
        cnt++;
    }
    
    // insert at tail or end
    if(temp -> Next == NULL){
        InsertAtTail(Head,Tail,data);
        return;
    }

    Node * NodeToInsert = new Node(data);
    NodeToInsert-> Next = temp -> Next ;
    // NodeToInsert -> Prev = temp ;
    temp -> Next -> Prev = NodeToInsert -> Next;
    temp -> Next = NodeToInsert;
    NodeToInsert -> Prev = temp ;


}
 
 void DeleteNode(Node*&Head,int pos){
   
   // deleting First Node
    if(pos == 1){
        Node * temp = Head;
        Head = Head ->Next;
        temp -> Next -> Prev = NULL;
        temp -> Next = NULL;
        delete temp;
        
    }

    else{
        // deleting middle or last Node
       Node* Curr = Head;
       Node * Pre = NULL;

       int cnt  =1;

       while(cnt<pos){
        Pre = Curr;
        Curr = Curr -> Next;
        cnt++;
       }
       // deleting Last Node 
     
       Curr -> Prev = NULL;
       Pre ->Next = Curr -> Next;
     //  Curr->Next -> Prev = NULL;  // this is additional code from my side which i thought neccesary
       Curr ->Next = NULL;
       delete Curr;
    }
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

void PrintPrev(Node*&Head){

Node * temp= Head;
while(temp != NULL){
    cout<<temp ->Prev << " " << temp -> Next <<endl;
    temp = temp -> Next;
}

}
int main(){
  
    Node* Head =NULL;
    Node* Tail = NULL;
    // InsertAtHead(Head,Tail,10);  
    //  InsertAtHead(Head,Tail,20);   
    //   InsertAtHead(Head,Tail,30); 
    //    InsertAtHead(Head,Tail,40); 
    //     InsertAtHead(Head,Tail,50); 
    //      InsertAtHead(Head,Tail,60);
        
    
    // Print(Head);
    // cout<<endl;
      InsertAtTail(Head,Tail,70); 
      InsertAtTail(Head,Tail,80); 
      InsertAtTail(Head,Tail,90); 
        Print(Head);
        cout<<endl;
     InsertAtPosition(Head,Tail,100,4);  
      Print(Head);
      cout<<endl;
      DeleteNode(Head,4);
      Print(Head);
      cout<<endl;

     PrintPrev(Head);
}

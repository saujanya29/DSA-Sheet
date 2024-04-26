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


int Solve(Node* Head){


    Node* C1 = NULL;
    Node* C2 =NULL;

    Node* temp = Head;

    int mini = INT_MAX;
    int len = 0;
    while(temp -> Next !=NULL){
        
        if((temp ->data > temp ->Prev-> data)&& (temp -> data > temp -> Next -> data ) 
               || (temp ->data < temp ->Prev-> data) && (temp -> data < temp -> Next -> data )){
             
              if(C1 != NULL){
                C2 = temp;
                mini = min(mini,len);
                C1 = C2;
                len = 0;
              }else{
                C1 = temp;
              }
              
             
        }
        if(C1 != NULL){
            len++;
        }
      
        temp = temp -> Next;
        
    }
  
  return mini;



}
int main(){
       
    Node* Head =NULL;
    Node* Tail = NULL;
    InsertAtTail(Head,Tail,1); 
    InsertAtTail(Head,Tail,2); 
    InsertAtTail(Head,Tail,5); 
    InsertAtTail(Head,Tail,3); 
    InsertAtTail(Head,Tail,2); 
    InsertAtTail(Head,Tail,7); 
    InsertAtTail(Head,Tail,8); 
    InsertAtTail(Head,Tail,9);
    InsertAtTail(Head,Tail,1);  
    InsertAtTail(Head,Tail,10); 
        Print(Head);
        cout<<endl;
  int ans =  Solve(Head);
  cout<<ans<<endl;
}

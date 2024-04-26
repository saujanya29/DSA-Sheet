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

//   ~Node(){
      
//       int value = this -> data ;
//       if(this-> Next != NULL){
//         delete Next;
//         this ->Next =NULL;
//       }
//          cout << " memory is free for node with data " << value << endl;
//   }

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






Node * Solve(Node * First , Node * Second){
 // if first list have only one node then point its next to entire second list
 if ( First -> Next == NULL){
    First -> Next  = Second;
 }


Node * Curr1 = First;
Node * Next1  = Curr1 -> Next ;
Node * Curr2  = Second;
Node * Next2  = Curr2->Next;


while(Next1 != NULL && Curr2 != NULL ){

    if((Curr2 -> data >= Curr1 -> data) && (Curr2 -> data <= Next1-> data) ){

           // Inserting Node from Second list in between the first
           Curr1 -> Next = Curr2;
           Next2 = Curr2 -> Next ;
           Curr2 -> Next = Next1;

           // Updating Pointers 
           Curr1 == Curr2;
           Curr2 = Next2;
       
    }

    else{
        // curr1 and next1 ko aage badhana pdega
       Curr1 =  Next1;
       Next1 = Next1 -> Next ;

       // if first list gets empty by here 
       if(Next1 == NULL){
        Curr1 -> Next = Curr2;
        return First;
       }

    }
}
return First ;

}

Node * MergeTwoSortedList(Node * First ,Node * Second){

    if( First == NULL ){
        return Second;
    }
    if(Second == NULL ){
        return First;
    }

    if(First -> data < Second -> data ){
        return Solve(First,Second);
    }
    else{
        return Solve(Second,First);
    }
}




int main(){

      


        // creating a  first list 
    Node *First = new Node(1);
     
    Node * HeadF = First;
    Node * TailF = First;
    TailF -> Next = new Node(5);
    TailF -> Next -> Next = new Node(7);
    TailF -> Next -> Next -> Next= new Node(9);
    TailF -> Next -> Next -> Next ->Next = new Node(11);

   // Printing First list 
    cout<<"Printing First List : " ;
    Print(HeadF);
    cout<<endl;
    
    Node *Second= new Node(2);
     
    Node * HeadS = Second;
    Node * TailS = Second;
    TailS -> Next = new Node(3);
    TailS -> Next -> Next = new Node(4);
    // TailS -> Next -> Next -> Next= new Node(8);
    // TailS -> Next -> Next -> Next ->Next = new Node(10);

    cout<<"Printing Second List : " ;
    Print(HeadS);
    cout<<endl;


    // Merging Both The List 
    Node * ans = MergeTwoSortedList(First,Second);
    cout<<"Printing Merged List :";
    Print(ans);
    cout<<endl;

}

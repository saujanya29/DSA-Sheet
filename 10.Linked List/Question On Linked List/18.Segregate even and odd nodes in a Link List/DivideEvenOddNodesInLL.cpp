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

Node* divide( Node *head){
        // code here
        
        
     Node* OddHead = new Node(-1);
     Node* OddTail = OddHead;
     Node* EvenHead = new Node(-1);
     Node* EvenTail =  EvenHead;
       
     Node * Curr = head;
     Node* temp;
     
     while(Curr){
         
          temp = Curr ;
          Curr = Curr -> Next;
          temp -> Next = NULL;
          
          if(temp -> data &1){
              OddTail -> Next = temp;
              OddTail = temp;
          }
          else{
              EvenTail -> Next = temp;
              EvenTail = temp;
          }
     
         
     }
     
     EvenTail -> Next = OddHead -> Next;
     
     return EvenHead ->Next;
}
        

int main(){

    
    //17 15 8 9 2 4 6
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

  Node * ans = divide(a1);

  Print(ans);
  cout<<endl;



}

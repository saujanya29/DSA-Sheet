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


// Deleting middle node

    Node * deleteMiddle(Node * head) {
        Node * slow = head ;
        Node * fast = head -> Next;

     // if there is only one node then return null
        if( head -> Next == NULL){
             return NULL ;
        }

     /*
      here we are cheaking (fast -> next -> next) so that slow pointer
      points to one node   prior to the middle so we can delete mid node 

        in while loop if conditons is :
        -> fast ->next != NULL  ... then slow pointer will be the node to be deleted

        -> fast ->next -> next  != NULL ... then slow pointer will be the one node prior 
          to node to be deleted and this is used in deletion of node 
       
     
     */

        while(fast -> Next->Next != NULL && fast -> Next ->Next -> Next!= NULL){
            slow = slow -> Next;
            fast = fast -> Next ->Next;
        }

        // slow node is now one node prior to the node to be deleted
        slow -> Next = slow -> Next -> Next;
        return head;

    }

int main(){

    

     Node * a1 = new Node(4);
    Node * b1 = new Node(1);
    Node * c1 = new Node(8);
    Node * d1 = new Node(4);
    Node * e1 = new Node(5);
     Node * f1 = new Node(8);
   a1 -> Next = b1;
   b1 -> Next = c1;
   c1 -> Next = d1;
   d1 -> Next = e1;
    e1->Next = f1;

  Print(a1);
  cout<<endl;

  deleteMiddle(a1);
  Print(a1);
  cout<<endl;

}

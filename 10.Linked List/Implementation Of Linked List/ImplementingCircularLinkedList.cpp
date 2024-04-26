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
    Node* Next;

    Node(int data){
        this-> data = data;
        this->Next = NULL;
    }

    ~Node(){
        int value  = this -> data ;
        if(this-> Next != NULL){
            Next = NULL;
            delete Next;
        }
          cout << "memory is free for node with data " << value << endl;
    }
};

void InsertNodes(Node* &Tail,int element ,int data){
  
  // Empty List
  if(Tail == NULL){
    Node * NewNode  = new Node(data);
    Tail = NewNode;
    Tail->Next = NewNode;
  }
  else{

    // list is non empty
    //Assuming that the element is present in the list

    Node *Curr = Tail;

    while(Curr -> data != element){
        Curr = Curr -> Next;
    }

    // element Found - Curr is representing element wala Node 

     Node* NewNode = new Node(data);
     NewNode->Next = Curr-> Next;
     Curr-> Next = NewNode;
  }


}

void PrintNode(Node* &Tail){

   Node * temp = Tail;
   // empty list
    if(Tail == NULL){
      cout<<"Tail is Empty"<<endl;
      return;
    }

    do{
         cout<<Tail->data<<" ";
         Tail = Tail -> Next;
    }
    while (Tail != temp) ;
    
    cout<<endl;
}

void deleteNode (Node* & Tail,int element){

    if(Tail == NULL){
    cout<<"List is empty"<<endl;
    return;
    }

    else{
        // list is non empty
        // assuming element is present in LL

        Node* Prev = Tail;
        Node* Curr = Prev -> Next;

        while(Curr -> data  != element){
           Prev = Curr;
           Curr = Curr-> Next ;
        }

        /*check for only one node - if Curr -> data == Prev -> data means there is only one Node */
        // this step from freeing curr from nodes ahead of it 

        Prev -> Next = Curr -> Next;

        // check for 1 NODE
        if(Curr == Prev){
            Tail == NULL;
        }

         //>=2 Node linked list   -- Doubt over this line of code
        else if(Tail == Curr ) {
            Tail = Prev;
        }
        Curr ->Next =NULL;
        delete Curr;

    }

}

bool isCircularList(Node* Head) {
    //empty list
    if(Head == NULL) {
        return true;
    }

    Node* temp = Head -> Next;
    while(temp != NULL && temp != Head ) {
        temp = temp -> Next;
    }

    if(temp == Head ) {
        return true;
    }

    return false;

}

int main(){

     Node* Tail = NULL;
     InsertNodes(Tail, 5, 3);
   //  PrintNode(Tail);
      InsertNodes(Tail,3, 6);
       InsertNodes(Tail, 6, 8);
        InsertNodes(Tail, 3, 9);
        PrintNode(Tail);
        cout<<endl;
        deleteNode(Tail,6);
          PrintNode(Tail);
  bool ans = isCircularList(Tail);
  if(ans) cout<<"true"<<endl;
  else cout<<"false"<<endl;


}

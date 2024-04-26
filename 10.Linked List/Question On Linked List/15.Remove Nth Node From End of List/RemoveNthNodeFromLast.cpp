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

// Appraoch :2 college Wallah

Node * RemoveNthNodeFromLast(Node * head,int n){


     /* 
        algorithm :
        Step 1 : Move the fast pointer by n places
        Step 2 : check if(fast ==NULL) means first node to be deleted 
        Step 3 : Move slow and fast pointer at same pace till (fast -> next != null )
        Step 4 :  now slow -> next = slow -> next -> next
        */
        
      Node *fast = head;
      Node* slow = head;
     
     // Moving fast pointer ahead n times 
      for(int i = 1 ; i<=n;i++){
          fast = fast -> Next;
      }
       // 
       if(fast == NULL){
          head = head -> Next;
           return head;
       }
       /* in while loop if conditons is :
        -> fast != NULL  ... then slow pointer will be the node to be deleted

        -> fast ->next != NULL ... then slow pointer will be the one node prior 
          to node to be deleted and this is used in deletion of node 
       */
      while(fast -> Next!= NULL){
          slow = slow -> Next;
          fast = fast -> Next;
      }

     slow -> Next = slow -> Next -> Next;
     return head;
}

// Appraoch 1 : My Approach

Node * RemoveNthNodeFromLast_(Node * head,int n){
       
        Node * temp = head;
        int m =0;
        // find size of list 
        while(temp!= NULL){
            m++;
            temp = temp -> Next;
        }

        // find index of node to deleted from the start
        int idx =( m-n+1);
        // if node is starting node or head node
        if(idx == 1){
            head = head -> Next;
            return head;
        }

        // else traverse the prev and curr pointer till curr point to deleting node
        Node* curr= head;
        Node * prev = NULL;
        int cnt = 1;
        while(cnt<idx){
           prev = curr;
           curr = curr -> Next;
           cnt++;
        }

        // curr node ko delete krdo
       prev ->Next = curr -> Next;
       curr -> Next = NULL;
       delete curr;
         
       return head;
}





int main(){

    Node * a = new Node(1);
    Node * b = new Node(2);
    Node * c = new Node(3);
    Node * d = new Node(4);
    Node * e = new Node(5);
   
   a -> Next = b;
   b -> Next = c;
   c -> Next = d;
   d -> Next = e;

  Print(a);
  cout<<endl;

 Node * ans = RemoveNthNodeFromLast_(a,5);
   
  Print(ans);
  cout<<endl;


    

}

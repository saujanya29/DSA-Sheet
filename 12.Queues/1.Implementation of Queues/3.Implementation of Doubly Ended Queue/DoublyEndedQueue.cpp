#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;


class Deque
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    // Initialize your data structure.
    Deque(int n)
    {
        // Write your code here.
        this -> size =n;
        arr = new int[size];
        front = -1;
        rear  = -1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        // Write your code here.
        // check if queue is full
        if(isFull()){
            return false;
        }
        // pushing first element
        else if(isEmpty()){
            front = rear =  0;
        }
        // to maintain cyclic nature 
        else if(front == 0 && rear != size -1){
            front = size-1;
        }
        // normal flow
        else{
            front--;
        }
        arr[front] = x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        // Write your code here.
        // chech if Queue is full
        if(isFull()){
            return false;
        }
        // pushing the first element
        else if(isEmpty()){
          front =  rear = 0;
        }
       // to Maintain cyclic nature
       else if(rear == size -1 && front!=0){
           rear = 0;
       }
       // normal flow
       else{
           rear++;
       }
       arr[rear] = x;
       return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        // Write your code here.
        // check Queue is empty ?
        if(isEmpty()){
            return -1;
        }
        // popping that element and then updating the front and rear indexes
        int ans = arr[front];
        arr[front] = -1;
        // if only one element is present
         if(front == rear){
            front = rear = -1;
        }
        // to maintain cyclic nature 
        else if(front == size-1){
            front = 0;
        }
        // normal flow
        else{
            front++;
        }
        return ans;

    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        // Write your code here.
        // check if Queue is empty
        if(isEmpty()){
            return -1;
        }
        // poppong the element then update the front and rear indexes
        int ans= arr[rear];
        arr[rear] = -1;

        // if only one element is present in queue
        if(front == rear){
            front = rear =-1;
        }
        // to maintain cyclic nature
        else if(rear == 0){
            rear = size -1;
        }
        // normal flow
        else{
            rear--;
        }
        return ans;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        // Write your code here.
        if(isEmpty()){
            return -1;
        }
        
        return arr[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        // Write your code here.
        if(isEmpty()){
            return -1;
        }
        return arr[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        // Write your code here.
        if(front ==-1){
            return true;
        }

        else{
            return false;
        }
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        // Write your code here.
        if((front ==0 && rear == size-1) || (rear == (front-1)%(size-1) && front!=0 ) ){
            return true;
        }
        else{
            return false;
        }
    }
};





int main(){

    Deque dq(6);
    // dq.pushFront(1);
    // dq.pushFront(2);
    // dq.pushFront(3);
    // dq.pushFront(4);
    // dq.pushFront(5);
    // dq.pushFront(6);

    dq.pushRear(1);
    dq.pushRear(2);
    dq.pushRear(3);
    dq.pushRear(4);
    dq.pushRear(5);
    dq.pushRear(6);

    cout<<"Popped element "<<dq.popFront()<<endl;
    cout<<"Popped element "<<dq.popFront()<<endl;

    cout<<"Popped element "<<dq.popRear()<<endl;
    cout<<"Popped element "<<dq.popRear()<<endl;
    


    


}

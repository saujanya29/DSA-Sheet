#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Queue {

public:
     int * arr;
     int size;
     int qfront;
     int rear;

    Queue() {
        // Implement the Constructor
        size = 100001;
        arr = new int[size];
        this -> qfront = 0;
        this -> rear = 0;

    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(qfront == rear){
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(rear == size){
            cout<<"Queue is empty";
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if(qfront == rear){
            return -1;
        }
        else{
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;

            if(qfront == rear){
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
        
    }

    int front() {
        // Implement the front() function
        if(qfront == rear){
            return -1;
        }
        else{
            return arr[qfront];
        }
    }
};

int main(){

    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    cout<<"popped element : "<<q.dequeue()<<endl;
    cout<<"front element : " <<q.front()<<endl;
    cout<<"popped element : "<<q.dequeue()<<endl;
    cout<<"front element : " <<q.front()<<endl;
    cout<<"popped element : "<<q.dequeue()<<endl;
    cout<<"front element : " <<q.front()<<endl;
    cout<<"popped element : "<<q.dequeue()<<endl;
    cout<<"front element : " <<q.front()<<endl;
    cout<<"is Queue empty :" <<q.isEmpty()<<endl;



}

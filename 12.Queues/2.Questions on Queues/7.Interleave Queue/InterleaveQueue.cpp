#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<queue>
#include<stack>
#include<unordered_map>
#include<algorithm>
using namespace std;

void InterleaveQueue(queue<int> &q){

if(q.size()%2 != 0){
    cout<<"input even numbe of elements";
}

stack<int> st;
int halfsize = q.size()/2;

// first pop first half from the queue and push in the stack
for(int i = 0 ; i<halfsize; i++){
     int element = q.front();
     q.pop();
     st.push(element);
}

// again push them into the queue

while(!st.empty()){
    int element  = st.top();
    q.push(element);
    st.pop();
}

// dequeue the first half element of queue and enqueue them back

for(int i = 0 ; i<halfsize;i++){
    q.push(q.front());
    q.pop();
}

// now again push the first half element in the stack;

for(int i = 0 ; i<halfsize; i++){
     int element = q.front();
     q.pop();
     st.push(element);
}

// now interleave the element from the stack and queue - means push one one element from stack and queue resp.

while(!st.empty()){

    st.push(st.top());
    st.pop();
    q.push(q.front());
    q.pop();

}


}

int main(){

    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);

    // while(!q.empty()){
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }

    InterleaveQueue(q);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }


}

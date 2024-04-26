#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<stack>
#include<queue>
#include<unordered_map>
#include<algorithm>
using namespace std;

// Approach 1: Using Extra Queue And Stack
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    
    stack<int> st;
    queue<int> queue;
    
    for(int i=0;i<k;i++){
        int element = q.front();
        q.pop();
        st.push(element);
    }
     // we wont use st.size() cause it will be changing as we pop elements so instead we will use st.empty();
    for(int i  = 0 ; !st.empty();i++){
        queue.push(st.top());
        st.pop();
    }
    
    // we wont use q.size() cause it will be changing as we pop elements so instead we will use q.empty();
    for(int i = k; !q.empty() ; i++){
          queue.push(q.front());
          q.pop();
    }
    
    return queue;
}


//Approach 2: Using Stack Data Structure  -- 
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    
    stack<int> st;

    for(int i=0;i<k;i++){
        int element = q.front();
        q.pop();
        st.push(element);
    }
    
    for(int i  = 0 ; !st.empty();i++){
        q.push(st.top());
        st.pop();
    }
    
    int t = q.size() - k;
    
    while(t--){
        int val  = q.front();
        q.pop();
        q.push(val);
    }
    
    return q;
    
}

int main(){

    

}

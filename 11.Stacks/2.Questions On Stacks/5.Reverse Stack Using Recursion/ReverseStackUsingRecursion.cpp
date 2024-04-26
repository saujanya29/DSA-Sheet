#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<stack>
#include<unordered_map>
#include<algorithm>
using namespace std;

// T.C. -- O(n*n)

void InsertAtBottom(stack<int> &stack,int x){

    if(stack.empty()){
        stack.push(x);
        return;
    }
    
    // Pre Recursion
    int Top = stack.top();
    stack.pop();

    // Recursive Call
     InsertAtBottom(stack,x);

    // Post Recursion
    stack.push(Top);
}




void reverseStack(stack<int> &stack) {
    // Write your code here

    // base case
    if(stack.empty()){
        return;
    }
    // Pre Recursion
    int Top = stack.top();
    stack.pop();

    // Recursive Call
    reverseStack(stack);

    // Post Recursion
    InsertAtBottom(stack,Top);



}

int main(){

   stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);


   reverseStack(st);

// Printing Stack 
     while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }



}

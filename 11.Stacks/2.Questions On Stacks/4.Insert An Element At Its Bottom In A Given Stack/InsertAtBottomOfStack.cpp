#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<stack>
#include<unordered_map>
#include<algorithm>
using namespace std;


stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    //base case
    if(myStack.empty()){
        myStack.push(x);
        return myStack;
    }
    
    // Pre Recursion
    int Top = myStack.top();
    myStack.pop();

    // Recursive Call
    pushAtBottom(myStack,x);

    // Post Recursion
    myStack.push(Top);
    return myStack;

}


int main(){
   
   stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    pushAtBottom(st,9);
    // printing the elements of stack
     while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    

    

}

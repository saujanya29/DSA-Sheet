#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<stack>
#include<unordered_map>
#include<algorithm>
using namespace std;


void Solve (stack<int>&inputStack, int size , int count){

   // base case

   if(count == size/2){
       inputStack.pop();
       return;
   }
   // Pre Recursion
   int Top = inputStack.top();
   inputStack.pop();
   count++;
   // recursive call 
   Solve(inputStack,size,count);
   // Post Recursion
   inputStack.push(Top);

}
void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
  
   int count = 0 ;
   Solve(inputStack,N,count);
 
}



int main(){

    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    deleteMiddle(st,st.size());

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
  //  cout<<st.size();


    

}

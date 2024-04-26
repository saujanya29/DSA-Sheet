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

// approach 1 : using Stack

queue<int> rev(queue<int> &q)
    {
        // add code here.
        stack<int>st;
        
        // pushing the element in the stack
        while(!q.empty()){
            int element = q.front();
            q.pop();
            st.push(element);
        }
        
        // now pop from the stack and push in the queue to get the reversed order 
        
        while(!st.empty()){
            int element = st.top();
            st.pop();
            q.push(element);
    }
    
    return q;
    }


  // Appraoch 2 : Using Recursion 

 void rev1(queue<int> &q){

    // base case 
    if(q.size() == 0){
       return ;
    }

    // pre Recursion
    int element = q.front();
    q.pop();

    // Recursive Call 
    rev(q);

    // post Recursion
    q.push(element);

   

  }


int main(){
 
   queue<int> q;
   q.push(1);
   q.push(2);
   q.push(3);
   q.push(4);
   q.push(5);

//  while(!q.empty()){
//        cout<<q.front()<<endl;
//        q.pop();
//    }


   rev1(q);

   while(!q.empty()){
       cout<<q.front()<<endl;
       q.pop();
   }
    

}

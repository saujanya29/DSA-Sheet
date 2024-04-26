#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<stack>
#include<unordered_map>
#include<algorithm>
using namespace std;

int findMinimumCost(string str) {
  // Write your code here

  // odd no of brackets then invalid string
  if(str.length()%2 ==1){
    return -1;
  }

  stack<char>st;

  for(int i= 0; i<str.size();i++){
    char ch = str[i];

    if(ch == '{'){
      st.push(ch);
    }
    
    else{ // closing brackets

      // removing the valid part in string
      if(!st.empty() && st.top() == '{'){
         st.pop();
      }
        else{
          st.push(ch);
        }
   }

  }

  // left with invalid part in the stack now

  int OpenB = 0;
  int closeB = 0;

   while(!st.empty()){
     
      char ch = st.top();

      if(ch  == '{'){
        OpenB++;
      }
      else{
        closeB++;
      }
    st.pop();
   }

   int ans = (OpenB+1)/2 + (closeB+1)/2;
   return ans;


}

int main(){

 string str = "{}}{}}";
 cout<<findMinimumCost(str)<<endl;;
    

}

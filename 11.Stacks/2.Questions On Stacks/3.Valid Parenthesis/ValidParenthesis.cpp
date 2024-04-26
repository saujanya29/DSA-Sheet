#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<stack>
#include<unordered_map>
#include<algorithm>
using namespace std;


bool isValidParenthesis(string s)
{
    // Write your code here.
    stack<char>st;
    for(int i = 0 ; i<s.length();i++){

          char ch = s[i];
       // check if ch is opening bracket then push in stack   
      if(ch =='(' || ch =='{' || ch == '['){
          st.push(ch);
      }
      else{ // closing brackets
            
            // check if stack is empty or not
            if(!st.empty()){
            
            // find top of stack and compare with ch if complementry bracket found then pop
            char Top = st.top();

           if((Top == '(' && ch == ')') ||
              (Top == '{' && ch == '}') ||
              (Top =='[' && ch ==']')){
              
                st.pop();
            }
           // if not a complementry brackets then return false
           else{
                return false;
            }

           }
           // if stack not empty that means no complementry bracket found thus return false
           else{
               return false;
           }
     
            }
    }
    
     if(st.empty()) return true;
      else return false;

}

int main(){

   
    string s = "[()]{}{[()()]()}";

   cout<< isValidParenthesis(s);

   
   



}

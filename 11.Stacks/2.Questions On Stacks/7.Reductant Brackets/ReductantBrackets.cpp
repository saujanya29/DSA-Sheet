#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<stack>
#include<unordered_map>
#include<algorithm>
using namespace std;


bool findRedundantBrackets(string &s)
{
    // Write your code here.

    stack<char> st;
    for(int i = 0 ; i<s.size();i++){
        char ch = s[i];
        if(ch == '(' || ch =='+' || ch == '-' || ch =='*' || ch == '/'){
            st.push(ch);

        }
        else {  // Closing brackets or characters
              
               if(ch ==')'){
                
                // chech if operator is present in the stack
                // before the opening bracket then its not reductant
            
              
              bool isReductant = true;

              while(st.top() != '('){
               
              char br = st.top();
              
              if(br =='+' || br == '-' || br =='*' || br == '/'){
                isReductant = false;
              }
              st.pop();
              }
              // agr string reductant yahi par h toh return kro
              // else aage ke index pe check krege
              if(isReductant) return true;
              st.pop();
               }
              
        }
    }
   return false;
   
} 
   
  

int main(){

    string str = "(a+c*b)+(c))";
   cout<< findRedundantBrackets(str);

    

}

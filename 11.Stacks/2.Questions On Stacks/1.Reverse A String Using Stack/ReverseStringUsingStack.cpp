#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<stack>
#include<algorithm>
using namespace std;

/*  STL for Stacks
creation : stack<data_type>Nmae ;
for eg - stack<int>s;

Operations :
1. s.push(val)     -- pushes val at top 
2.s.pop()          -- pops top element
3.s.peek() or s.top() -- return top value
4.s.empty()         - return true/false


*/


int main(){

    stack<char>s;
    string str = "abcde";
    for(int i =0; i<str.size();i++){
        char ch = str[i];
        s.push(ch);
    }
    string ans = "";
    while(!s.empty()){
         char ch = s.top();
         ans.push_back(ch);
         s.pop();
    }

    cout<<ans<<endl;

    

}

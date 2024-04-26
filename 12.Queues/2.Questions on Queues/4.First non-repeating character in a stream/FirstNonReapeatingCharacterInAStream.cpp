#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<queue>
#include<map>
#include<unordered_map>
#include<algorithm>
using namespace std;


	string FirstNonRepeating(string A){
		    // Code here
		    string ans = "";
		  // creating map 
		  map<char,int> m;
		  queue<char> q;
		  
		  for(int i = 0 ; i < A.length();i++){
		      // pushing curr char in queue
		      char ch = A[i];
		      q.push(ch);
		      m[ch]++;
		      
		      // for every index we will check queue and find first non repeating char
		      while(!q.empty()){
		          // if char is repeating so just pop it 
		          if(m[q.front()]>1){
		              q.pop();
		          }
		          else{
		              // here we are breaking the loop because we need to store first non repeating element 
		              //so if found then no need to check further in queue
		              ans.push_back(q.front());
		              break;
		          }
		      }
		      
		      // if Queue is empty then means no non reapeating char is present
		      if(q.empty()){
		          ans.push_back('#'); 
		      }
		      
		  }
		    
		    
		 return ans;   
		}

int main(){

    string A = "aabc";

   cout<< FirstNonRepeating(A);


}

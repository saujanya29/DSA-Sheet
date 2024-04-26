#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<stack>
#include<unordered_map>
#include<algorithm>
using namespace std;



 // function for is a knows b 
    
    bool Knows(vector<vector<int> >& M,int a,int b ,int n){
        
        if(M[a][b]==1)  return true;
       else  return false;
        
        
    }
    
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int>st;
        for(int i =0;i<n;i++){
            st.push(i);
        }
        
        // check two elements in the stack is any one is the celebrity
        while(st.size()>1){
            
           int a = st.top();
           st.pop();
           int b = st.top();
           st.pop();
           
           if(Knows(M,a,b,n)){
               st.push(b);
           }
           else{
               st.push(a);
           }
           
        }

        // single element in the stack can be potential celebrity 
        int ans = st.top();
        
        // lets verify that ans is celebrity or not
        // row check
        int zeroCount = 0;
        
        for(int i =0 ;i<n;i++){
            if(M[ans][i] == 0){
                zeroCount++;
            }
        }
        
        if(zeroCount != n){
            return -1;
        }
        
        
        // Col check 
        
        int oneCount = 0;
        
        for(int i =0 ;i<n;i++){
            if(M[i][ans]==1){
                oneCount++;
            }
        }
        
        if(oneCount != n-1){
            return -1;
        }
        
        
        return ans;
        
        
    }



int main(){

    vector<vector<int>> M = {{0,1,0},{0,0,0},{0,1,0}};
  cout<<  celebrity(M,M[0].size());

}

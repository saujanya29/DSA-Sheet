#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<queue>
#include<unordered_map>
#include<algorithm>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                                 
       
       // declairing a deque 
        deque<long long int> dq;
        vector<long long int> ans;
        
        // process first K elements
        
        for(int i = 0 ; i<K;i++){
            
            if(A[i]<0){
                dq.push_back(i);
            }
        }
        
        // storing first ans
        if( dq.size() >0 ){
            ans.push_back(A[dq.front()]);
        }else{
            ans.push_back(0); 
        }
        
        // Processing for rest of windows 
        
        for(int i =K ; i<N;i++){
            
            if(!dq.empty() && (i-dq.front()>= K)){  // i-dq.front()>= K this will check that front of queue will be included in next window or not 
                dq.pop_front();
            }
            
            // pushing current element in the queue
            if(A[i]<0){
                dq.push_back(i);
            }
            
            // storing ans for current window -- d.front will be our first negative element of this windows
             
             if(!dq.empty()){
                 ans.push_back(A[dq.front()]);
             }
             else{
                 ans.push_back(0);
             }
            
        }
        return ans;

 }

int main(){
    int N = 8;
    int K = 3;
    long long int A[8] = {12, -1, -7, 8, -15, 30, 16, 28};
    
  vector<long long int> ans =  printFirstNegativeInteger(A,N,K);

  for(int i = 0 ; i<ans.size(); i++){
       cout<<ans[i]<<" ";
  }
  
  
  

}

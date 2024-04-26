#include<iostream>
#include<climits>
using namespace std;

  long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        
        long long currSum =0;
        long long maxSum = INT_MIN;
        
        
        for(int i = 0; i< n; i++){
            currSum += arr[i];
            
            if(currSum > maxSum){
                maxSum = currSum ;
            
            }
            
            if(currSum <0){
                currSum = 0;
            }
        }
        
        return maxSum ;
   
    
    }




int main(){

    int Arr[] = {1,2,3,-2,5};
   int ans=  maxSubarraySum(Arr,5);
   cout<< ans<< endl;

}



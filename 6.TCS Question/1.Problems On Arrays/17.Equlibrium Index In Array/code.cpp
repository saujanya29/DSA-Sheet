#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

// Method 1 - Using TotalSum                                   T.C. -> O(n)  S.C. -> O(1) 

int findEquilibriumIdx(int* arr,int n){
      
      int sum = 0;
    for(int i = 0 ; i<n; i++){
         sum += arr[i];
    }
    
    int leftSum = 0;
    int RightSum = sum;
    for(int i = 0 ; i<n; i++){
        RightSum  -= arr[i];    // Substracting the current index element from the total sum 
       if(leftSum == RightSum){
        return i;
       }
       leftSum += arr[i];  // Adding the current index element to update the leftSum
    }
    return -1;

}



// Method 2 - Using nested loop        T.C. -> O(n*n)  S.C. -> O(1) 

int findEquilibriumIdx1(int*arr,int n ){


    for(int i = 0 ;i<n;i++ ){
     
    int leftSum = 0;
    int rightSum= 0;

    // Calculating the leftSum for current index

    for(int j = 0 ; j<i; j++){
        leftSum += arr[j];
    }
    // Calculating the rightSum for current index
    for(int j = i+1; j<n; j++){
        rightSum += arr[j];
    }
    
    if(leftSum == rightSum){
        return i;
    }
    }
     return -1;
}


int main(){

  int n = 5;
  int arr[] = {2, 3, -1, 8, 4};
  int equilibriumidx = findEquilibriumIdx1(arr, n);
  cout << equilibriumidx << endl;
  return 0;
    

}

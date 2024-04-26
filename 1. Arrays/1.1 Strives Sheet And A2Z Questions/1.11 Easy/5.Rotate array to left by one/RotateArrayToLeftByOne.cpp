#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;


//Appraoch 1 : store in the another array then copy to original


// Aprroach 2: in_place Aprroach
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.

     //int n =  arr.size();
        int x = arr[0];
       for(int i =0; i<n-1 ; i++){
           arr[i] = arr[i+1];
       }
        arr[n-1] = x;
        
    return arr;
}

int main(){

  vector<int> arr ={1,2,3,4,5};
  rotateArray(arr,arr.size());
  for(int i = 0 ; i<arr.size(); i++){
      cout<<arr[i]<<" ";
  }
  
  
  
    

}



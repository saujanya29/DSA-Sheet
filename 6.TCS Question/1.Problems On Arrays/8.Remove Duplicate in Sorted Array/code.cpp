#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<algorithm>

using namespace std;



// Method 1 - Using hash set

int RemoveDuplicates(vector<int> &arr){

    set<int> set;      // set will insert only unique elements 
    for(int i = 0 ; i< arr.size();i++){
        set.insert(arr[i]);

    }
    int k = set.size(); // thus size of the set will be number of unique elemens

    int j =0;
    for(auto x: set){
        arr[j++] = x;
    }
    return k;
}


// Method 2 - Using Two Pointer Appraoch 

int RemoveDuplicates1(vector<int> &arr){
    int i = 0 ;
    int j =1;

    while(j<arr.size()){
        if(arr[j] != arr[i]){    // compare the i and j if not equal then store the j in the next position to i 
          arr[++i] = arr[j];
          j++; // keep incrementing the j 
        }
        else{
             j++;
        }
    }
    return i+1; // return this
}

int main(){

   vector<int> arr = {1,1,1,2,2,3,3,3,3,4,4};
   int ans = RemoveDuplicates1(arr);
   cout<<ans<<endl;

  for(int i = 0 ; i<ans; i++){
    cout<<arr[i]<<" ";
  
  }
  
  
  




}

#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

// RANK - Rank of element is defined as the index(1 based indexing) of the element when array is sorted 


// Method 1 - Using set and nested loop      T.C. -> O(n*n)  S.C. -> O(n)     

void ReplaceWithRank(int * arr,int n){

    for(int i =0;i<n;i++){
        set<int> s;  // we are using set so it stores unique element 

        for(int j = 0 ;j<n;j++){
            if(arr[j]<arr[i]){  // // elements which is less than arr[i] will be stored in set and 
                s.insert(arr[j]);  // count of numbers stored will be rank of arr[i] in sorted array
                 
            }
        }
      
       cout<<s.size()+1<<" "; // this will print the rank of every element 
    }
}


// Method 2 - Using map data structure     T.C. -> O(n*log(n))  S.C. -> O(n)     

void ReplaceWithRank1(int * arr, int n){
                                   
    unordered_map<int,int>mp;
    int brr[n];

    for(int i = 0 ; i<n; i++){
            brr[i] = arr[i];
    }

    sort(brr,brr+n);    // Note: sorting of array is executed this way
    
    int temp = 1;
    // storing rank in array
    for(int i =0;i<n;i++){
        //if element is previously not store in the map
        if(mp[brr[i]]== 0){
           mp[brr[i]] = temp;
           temp++; 
        }
       
    }
  //   
    for(int i = 0 ; i<n; i++){
       cout<<mp[arr[i]]<<" ";
    }
    
    
    
}

int main(){

    int n = 6;
	int arr[n] = {20, 15, 26, 2, 98, 6};
    ReplaceWithRank1(arr,n); // This will Print the Rank of each element in array
  
    
    

}

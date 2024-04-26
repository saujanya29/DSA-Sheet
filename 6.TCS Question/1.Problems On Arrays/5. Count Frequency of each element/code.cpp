#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;


// Method 1 - using nested loop   T.C. -> O(nxn)  S.C. -> O(n)

void CountFreq(int arr[] , int n){
 
 vector<bool> visited(n,false); // this will store index's element counted or not , so if visited means already counted in the frequency 

 for(int i = 0 ; i<n; i++){
     int count = 0;

  if(visited[i] == true){
    continue;
  }
 else{
     for(int j = i; j<n; j++){
    
       if(arr[i] == arr[j]){
        visited[j]= true;  /// here marking index of j iterator so that when i iterator comes to index j it continues to next index as j is already counted in frequency
        count++;
       }
    }
    
    cout<< "frequency of " << arr[i]<< " is :" <<count<<endl;
 }
  
 }
 
}


// Method 2 - Using Map    T.C. -> O(n)  S.C. -> O(n)

void CountFreq1(int arr[] , int n){
    

    unordered_map<int,int> mp;

    for(int i = 0 ; i<n; i++){
    
     mp[arr[i]]++;
    }

    for(auto x: mp){
         cout<<x.first << " -> "<<x.second <<endl;
    }

    
    
    
}


int main(){

    
int arr[] = {10,5,10,15,10,5};
CountFreq(arr,6);
CountFreq1(arr,6);

}

#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

// Function For Addition At Start 
void AdditionAtStart(int* arr,int n,int val){
              
    for(int i =n-1;i>=0;i--){
        arr[i+1] = arr[i];
    }
    arr[0] = val;
}




// Function For Addition at the end 
void AdditionAtEnd(int*arr,int n,int val){
   arr[n] = val;
}



// Function to Add at any pos
void AdditionAtPos(int*arr,int n, int val,int pos){

    for(int i = n;i>=pos;i--){
        arr[i] = arr[i-1];
    }
    arr[pos-1] = val;
}

int main(){




int n =8;
int arr[9] = {10,9,14,8,20,48,16,9};

// Before inserting a value at the begining
 for(int i = 0 ; i<n; i++){
  cout<<arr[i]<<" ";
 }
 cout<<endl;


AdditionAtPos(arr,n,40,4);
// After inserting a value at the end
 
  
for(int i = 0 ; i<=n; i++){
 
  cout<<arr[i]<<" ";
 
}

 

}

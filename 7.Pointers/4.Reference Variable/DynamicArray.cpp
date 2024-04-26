#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

int getSum(int*arr,int n){
    int sum =0;
    for(int i = 0 ; i<n; i++){
      
      sum += arr[i];  // arr[i] = *(arr+i)

    }
    
    return sum;
    
}

int main(){


/*
creating variable sized array
*/ 
int n;
cin>>n;

// variable size array
int* arr = new int[n];

// taking input in array
for(int i = 0 ; i<n; i++){
  cin>>arr[i];
}

int ans = getSum(arr,n); 

cout<<"answer is "<<ans<<endl;

//case 1
    while(true) {
        int i = 5; 
        //memory will be created and then get deleted after hitting 
        // the closing bracket as they are allocated in the stack
    }
    
//case 2
    while(true) {
        int* ptr = new int;
        // here as memory is created in the heap so we have to manually delete it
        // other this program will run infinitely and memory get overloaded
    }




}

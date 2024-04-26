#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int reverseArray(int arr[] , int n){
    int p1 = 0 ;
    int p2 = n-1;


    while(p1<p2){
        int temp = arr[p1];
         arr[p1] = arr[p2];
         arr[p2] = temp;

         p1++;
         p2--;
    }
}

// Method 1 - use extra array to reverse array
// Method 2- use two pointer approach for reverse array (best approach)
// Method 3 - use recursion
// Method 4 - use library to solve question 

int main(){

int arr[5] ={1,2,3,4,5};
reverseArray(arr,5);
for(int i = 0 ; i<5; i++){
    cout<< arr[i]<<" ";
}


}

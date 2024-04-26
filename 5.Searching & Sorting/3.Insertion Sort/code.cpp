#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

void insertionSort( vector<int> &arr,int n){
    // Write your code here.
    for(int i = 1;i<n;i++){
        int temp = arr[i];
        int j = i-1; // starting from 1 index less than i to compare

        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j]; // shifting arr[j]'s value to next index
                                   // to insert temp at right index
            }
            else{
                break;// this loop will break and then we will insert temp at right place
            }
        }
        arr[j+1] =temp;// inserting temp at j+1
    }
}

int main(){

    vector<int> arr = {6,2,8,4,10};
    insertionSort(arr,5);
    for(int i = 0 ; i<5; i++){
       cout<<arr[i]<<" ";
    }

}


#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

void SelectionSort(vector<int>& arr, int n){
    
     
    for(int i = 0;i<n-1;i++){
        int minIndex =i;

        for(int j = i+1; j<n;j++){
           if(arr[j]<arr[minIndex]){
              minIndex = j;
           }
        }
        swap(arr[i],arr[minIndex]);
    }

}

int main(){

    
    vector<int> arr = {6,2,8,4,10};
    SelectionSort(arr,5);
    for(int i = 0 ; i<5; i++){
       cout<<arr[i]<<" ";
    }

}

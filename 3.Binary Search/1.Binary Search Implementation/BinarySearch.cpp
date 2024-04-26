#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

// binary search is only applicable in sorted array
int BinarySearch(int *arr,int n , int target){

  int s = 0;
  int e = n-1;
 int mid = s + (e-s)/2;
  while(s<=e){ // in binary search s<=e always
    
    if(arr[mid] == target){
        return mid;
        
    }

    else if(arr[mid]<target){
        s = mid+1;
    }
    else if(arr[mid]>target){
        e= mid-1;
    }

    mid = s + (e-s)/2;
  }
  return -1;
}





int main(){

int arr[6] = {1,2,3,4,5,6};
cout<<BinarySearch(arr,6,7);
    

}

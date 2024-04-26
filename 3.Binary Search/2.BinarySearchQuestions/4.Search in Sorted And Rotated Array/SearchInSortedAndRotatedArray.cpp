#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;


int getPivot(int *arr, int n){

    int s =0;
    int e = n-1;
    int mid = s+(e-s)/2;

    while(s<e){

       if(arr[mid]>=arr[0]){
           s= mid+1;
       }else{
        e = mid;
       }
     mid = s+(e-s)/2;
    }
    return s;
    }


int BinarySearch(int *arr,int start ,int end, int target){

  int s = start;
  int e = end;
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
    int n =7;
     int arr[n] = {7,9,1,3,4,5,6};
    int k =4;
    int pivot = getPivot(arr,n);
    int ans = 0;
    if(arr[pivot]<=k && arr[n-1] >k ){
         ans= BinarySearch(arr,pivot,n-1,k);
    }else{
         ans = BinarySearch(arr,0,pivot-1,k);
    }

    cout<<ans<<endl;
    

}

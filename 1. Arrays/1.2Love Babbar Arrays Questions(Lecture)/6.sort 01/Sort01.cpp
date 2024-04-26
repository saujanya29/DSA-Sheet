#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

void Sort01(int *arr , int n){

  int left = 0;
  int right = n-1;

while(left<right){

   while(arr[left]==0 && left<right){  // in these loops chech whather left < right or not so that index after this dont get reversed
    left++;
   }
   while(arr[right] == 1 && left<right){
    right--;
   }

   // reaching here means this condition will hit arr[left]== 1 and arr[right] == 0 so swap them
  if(left<right){
    swap(arr[left],arr[right]);
    left++;
    right--;
  }

}
}

int main(){

int arr[6] = {1,0,0,1,1,0};
Sort01(arr,6);
for(int i = 0 ; i<6; i++){
  cout<<arr[i]<<" ";
}



  

}

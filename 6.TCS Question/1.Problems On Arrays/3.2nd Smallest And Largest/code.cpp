#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int SecSmallest(vector<int> arr){

  int min = INT_MAX;
  int max = INT_MIN;
  
 
  for(int i = 1 ; i<arr.size(); i++){
       
       if(arr[i] < min ){
        min = arr[i];
       }
       if(arr[i]>max){
        max = arr[i];
       }

  }
  int secMin = INT_MAX;
  int secMax = INT_MIN;

  for(int i = 0 ; i<arr.size(); i++){
      
      if(arr[i] < secMin && arr[i] != min){
        secMin = arr[i];
      }
        // it will store the next smallest number after the smallest as this algorithm is used to store smallest and with using one more condition it will definetrly store next smallest numv
      if(arr[i] > secMax && arr[i] != max){
        secMax = arr[i];
      }

  }
 cout<< secMin<<' '<< secMax <<endl;


}

int main(){

vector<int> arr = {1,5,2,3,6,4,7};

SecSmallest(arr);



}

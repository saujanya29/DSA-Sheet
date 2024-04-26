#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

void MoveZeros(vector<int> &arr){
     
     int i =0;
     for(int j = 0 ; j<arr.size(); j++){
          if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
          }
     }
     

}

int main(){
  
  vector<int> arr = {0,1,0,3,11,0,0};
  MoveZeros(arr);
  for(int i = 0 ; i<arr.size(); i++){
     cout<<arr[i]<<" ";
  }
  
}

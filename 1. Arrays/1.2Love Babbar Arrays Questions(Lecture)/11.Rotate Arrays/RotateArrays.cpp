#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

void RotateArray(vector<int> &arr, int k){


   int n = arr.size();
    vector<int> temp(arr.size());

    for(int i = 0 ; i<arr.size(); i++){
          temp[(i+k)%n] = arr[i];
    }
    
    arr = temp;
    


}

int main(){

    vector<int> arr = {1,3,5,7,9,11};
    RotateArray(arr,2);
    for(int i = 0 ; i<arr.size(); i++){
          cout<<arr[i]<<" ";
    } 
    
    
    

}

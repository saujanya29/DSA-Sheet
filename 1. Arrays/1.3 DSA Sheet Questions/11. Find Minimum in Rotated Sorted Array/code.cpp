#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

int FindMin(vector<int> nums){

    int s= 0;
    int e= nums.size()-1;
    int mid = s+(e-s)/2;

  // this condition is for when arrray is rotated by number equal to its size
    if(nums[0]<nums[e]){
        return nums[0];
    }

    while (s<=e){
        // this will check if mid is pivot index or not 
        if(nums[mid] >= nums[0]){
            s = mid+1;
        }else{
            e= mid ;
        }
        // update mid 
        mid = s+(e-s)/2;

    }
    // return final ans 
    return nums[s];
}

int main(){

   vector<int> nums = {11,13,15,17};
   int ans = FindMin(nums);
   cout<< ans<<endl;
}

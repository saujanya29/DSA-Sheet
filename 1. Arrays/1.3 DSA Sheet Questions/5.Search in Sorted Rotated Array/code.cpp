#include<iostream>
#include<vector>
using namespace std;


int getPivot(vector<int>& nums){
    
    int s = 0 ;
    int e = nums.size()-1;
    
    int mid =  s +(e-s)/2;
    
    while(s<e){
        
        if(nums[mid]>=nums[0]){
            s = mid + 1;
        }else{
            e = mid ;
        }
        mid =  s +(e-s)/2;
    }
    return s;
}

int binarySearch(vector<int>& nums, int start , int end, int target){
    int s = start;
    int e= end;
   int mid = 0;
    
   while (s<=e){
       
       int mid =  s + (e-s)/2;
       if(nums[mid] == target){
           return mid;
       }
       
       if (nums[mid] > target){
           e = mid -1;
           
       }else{
           s = mid+1;
       }
       
   }
   
    return -1;
    
    
}


int main(){

    vector<int> nums= {4,5,6,7,0,1,2};
    int target = 0;
    int pivot = getPivot(nums);
    int n = nums.size();
        int ans;
    if(target >= nums[pivot] && target <= nums[nums.size()-1] ){
    
        ans = binarySearch(nums,pivot,n-1,target);
    }
        else{
        ans = binarySearch(nums,0,pivot-1,target);
    }

       cout<<ans<<endl; 
}

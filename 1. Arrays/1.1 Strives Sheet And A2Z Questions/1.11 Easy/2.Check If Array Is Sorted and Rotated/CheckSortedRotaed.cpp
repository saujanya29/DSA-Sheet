#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

 bool check(vector<int>& nums) {
        int count =0;
        int n = nums.size();

        /* check if any pair exist in which nums[i]<nums[i-1] if this exist then count++
         if pair count <= 1 then return true and arr is sorted and rotated  */

        for(int i = 1 ;i<n;i++){
            if(nums[i]<nums[i-1]){
                count++;
            }
        }
        // check again same for last and first element 
         if(nums[n-1]>nums[0]){
                count++;
            }
       
       // return true if count<=1
        return count<= 1;
    }

int main(){

vector<int> arr = {1,3,4,7,9,11};
cout<<check(arr);
    

}

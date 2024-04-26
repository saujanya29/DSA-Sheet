#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;


    void moveZeroes(vector<int>& nums) {

   // Approach 3: 
     int i = 0;
     for(int j =0;j<nums.size();j++){
         if(nums[j] != 0){
             swap(nums[i],nums[j]);
             i++;
         }
     }




// Approach 2:

    //      int j = -1;
    // //place the pointer j:
    // for (int i = 0; i < nums.size(); i++) {
    //     if (nums[i] == 0) {
    //         j = i;
    //         break;
    //     }
    // }

    // //no non-zero elements:
    // if (j == -1){
    //    return ;
    // }
     

    // //Move the pointers i and j
    // //and swap accordingly:
    // for (int i = j + 1; i < nums.size(); i++) {
    //     if (nums[i] != 0) {
    //         swap(nums[i], nums[j]);
    //         j++;
    //     }
    // }
    

// Approach 1:

    //     int i = 0;
    //     int j =1;

    // while(j<nums.size()){
    //     // if nums[j] is non zero and nums[i] is zero then swap
    //      if(nums[j] != 0 && nums[i]==0){
    //         swap(nums[j++],nums[i++]);
    //      } // check all conditions 
    //       else if(nums[j] != 0 && nums[i]!=0 ||nums[j] == 0 && nums[i]!=0){
    //          i++;
    //          j++;
    //      }else{
    //          j++;
    //      }
        
    // }

    }

int main(){

     vector<int> nums = {0,1,0,3,12};
     moveZeroes(nums);
     for(int i = 0 ; i<nums.size(); i++){
            cout<<nums[i]<<" ";
     }
     
     
     

}

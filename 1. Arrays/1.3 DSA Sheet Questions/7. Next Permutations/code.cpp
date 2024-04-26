#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;


void NextPermutations(vector<int> &nums){
    int n = nums.size(),k,i;
    
    // Step 1 : find index of element from back which is less than its next element 
    for(k = n-2 ; k>=0; i--){
        if(nums[k] < nums[k+1]){
            break;
        }
    }


 // Step 2: if k is less than zero it definately means that there is not such element exist so just reverse the whole array to next permutations 

    if(k<0){
        reverse(nums.begin(),nums.end());

    }


  // Step 3: if k exist then search for a number from back which is greater than value at index k i.e. nums[k]
    else{
        for(i = n-1; i>k ;i--){
            if(nums[k] < nums[i]){
                break;
            }
        }
    }

  // Step 4: swap both the element 
    swap(nums[k],nums[i]);
     
  // Step 5: now reverse the array froim index next to kth index 
    reverse(nums.begin()+k+1, nums.end());

}



int main(){

vector<int> nums = {1,2,3};
NextPermutations(nums);

for(int i = 0 ; i<nums.size(); i++){
     cout<< nums[i]<<" ";
}





}

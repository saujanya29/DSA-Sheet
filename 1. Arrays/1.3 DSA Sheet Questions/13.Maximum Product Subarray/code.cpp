#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

int MaxProduct(vector<int> &nums){
    int res =INT_MIN;
    int currMax = 1;
    int currMin = 1;
    int n = nums.size();
    int temp;
    

    // Step 1 : iterate a for loop in nums array 
    for(int i= 0 ;i<n; i++){
        // if at any index element is 0 then set currMax and CurrMin again to 1 and it will reset them
        if(nums[i] == 0){
            currMax = 1;
            currMin = 1;
        }
      
// store currMax * nums[i] in temp because we will need non-updated value of it in calculating currMin

temp = currMax * nums[i];

// for currMax we need compare between three (becasue currMin * nums[i] can alse become maximum if both are negative  ) and update with max out of them 

currMax = max(currMax * nums[i], max(currMin * nums[i] ,nums[i] )); // if some case nums[i] can also be max or min itself so compare with it too

//similary for currMax we need compare between three (becasue currMax * nums[i] can alse become miniumum if combination is of +ve and -ve) and update with min out of them 

currMin = min (currMin * nums[i] , min (temp , nums[i]));//we have to use temp because currMax is updated in previous step but we are comparing the original value 


// return output
res = max(res, currMax);  // No need to compare btw currMin and currMax cause currMax is updated such soit will always be more than currMin 

 
}
 return res;
}

int main(){

    vector<int> nums = {2,3,-2,4};
    int ans =  MaxProduct(nums);
   cout<<ans<<endl;
}

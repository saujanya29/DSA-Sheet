#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

// Apporach 1 - O(n) space used 
 vector<int> productExceptSelf(vector<int>& nums){
        int n = nums.size();
        // Step 1: created two prefix and postfix array 
        vector<int> prefix(n,1);
        vector<int> postfix(n,1);
        vector<int> output(n);
       
       // Initialised preFix with 1
        int preFix = 1;
    
   for(int i =0 ;i<n;i++){
    //Step 2:  iterated a for loop from start of nums array and stored prefix of each element of nums vector 

    // preFix means product of the all the elements before that element in the nums array
         prefix[i] = preFix;
         preFix = preFix*nums[i];
         
   }

   // Initialised preFix with 1
    int postFix = 1;

   for(int i = n-1 ; i>=0; i--){

     // Step 3: iterated a for loop from end of nums array and stored postFix of each element of nums vector 
    // postFix means product of all the element next to that index element of nums vector

       postfix[i]=  postFix;
       postFix =  postFix* nums[i];

    }

    //Step 4: multiplying the prefix and postfix of that index to get the product of array except self(i.e for each index )
    
    for(int i = 0; i< n ; i++){
        output[i]= prefix[i]*postfix[i];
    }
   // return output 
    return output;

  }





// Approach 2 - O(1) constant extra space (output array wont be considered as extra space as per question)

//  vector<int> productExceptSelf(vector<int> & nums ){
//          int n = nums.size();
//         vector<int> output(n,1);

//         // Step 1 : storing prefix in output array first 
//          int prefix = 1;
//         for(int i = 0;i<n; i++){
//              output[i] = prefix ;
//              prefix = prefix* nums[i];
//         }
       
//        // Step2: multiplying by postfix of indexes int output array from end of nums array 
//        int postfix = 1 ;
//         for(int i = n-1; i>=0 ; i--){
//             output[i] *= postfix;
//             postfix = postfix * nums[i];
//         }
//       // return the output array which consist product of array except self for each index
//       return output;
//  }


int main(){

    
vector<int> nums = {1,2,3,4};
vector<int> ans = productExceptSelf(nums);

for(int i = 0 ; i< ans.size(); i++){
    cout<<ans[i]<<" ";
}

}

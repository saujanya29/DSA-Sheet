#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

int GetPivot(vector<int> nums){

    int n = nums.size();
    int s = 0 ;
    int e = n-1;
    int mid = s+(e-s)/2;

    while (s<e){

        if(nums[mid] >= nums[0]){
            s = mid +1;
        }
        else{
            e = mid;
        }

        mid = s+(e-s)/2;
    }

    return s;
}

int findPairSum(vector<int> nums, int target){

    int n =  nums.size();
    // Step 1: get pivot index first 
    int pivot = GetPivot(nums);
    int s = pivot;
    int e = (pivot+n-1)%n;

    // How to Update low and high in sorted rotated array (MODULAR ARITHMETIC)
   //  start or low = (low+1)%size;    (start is pivot index )
  // end or high = (high+size-1)%size; (end is index just before the pivot i.e. (pivot+size-1)%size) )



    int ans = 0;
    while(s<=e){

        // comparing with target 
        if(nums[s]+ nums[e] == target){
            ans = 1;
            break;
        }
        // target is greater so update starting index as per modular arithmetic
        else if(nums[s]+ nums[e] < target){
                s = (s+1)%n;
        }
        // Else update ending index as per modular arithmetic discussed above
        else{
            e = (e+n-1)%n;
        }
    }
}

int main(){

cout<<"hello World"<<endl;
vector<int> nums = {11, 15, 6, 8, 9, 10};
int target = 16;
int ans = findPairSum(nums,target);
if(ans = 1){
  cout<<"true"<<endl;
}
else{
   cout<<"false"<<endl;
}

}

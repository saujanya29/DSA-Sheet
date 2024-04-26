#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;


// Two Pointer Approach 

vector<int>  merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
 
    
    int i = 0;
    int j =0;
    vector<int> ans;
    

    while(i<m && j<n){
       if(nums1[i]<nums2[j]){
           ans.push_back(nums1[i]);
           i++;
       }
       else{
           ans.push_back(nums2[j]);
           j++;
       }
    }

    while(i<m){
        ans.push_back(nums1[i]);
           i++;
    }
    while(j<n){
        ans.push_back(nums2[j]);
           j++;
    }

    // for(int i =0; i<ans.size();i++){
    //     nums1[i] = ans[i];
    // }
    return ans;
    }

int main(){

vector<int> arr1 = {1,3,5,7,9};
vector<int>arr2 = {2,4,6,8};

vector<int> ans = merge(arr1,arr1.size(),arr2,arr2.size());

for(int i = 0 ; i<ans.size(); i++){

cout<<ans[i]<<" ";
}



    

}

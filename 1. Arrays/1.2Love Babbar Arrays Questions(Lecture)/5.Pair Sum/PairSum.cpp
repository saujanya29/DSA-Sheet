#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s){
  // Write your code here.
   vector<vector<int>> ans;

   for(int i =0 ; i<arr.size();i++){
         
      for(int j = i+1;j<arr.size();j++){
          
          if(arr[i]+arr[j] == s){
             vector<int> temp;
             temp.push_back(min(arr[i],arr[j]));
             temp.push_back(max(arr[i],arr[j]));
             ans.push_back(temp);
          }
      }
   }
   sort(ans.begin(),ans.end());

   return ans;
}

int main(){

    
 vector<int> arr = {2,-3,3,3,-2};
 vector<vector<int>> ans = pairSum(arr,0);
  
  for(int i = 0 ; i<ans.size(); i++){
    for(int j = 0 ; j<ans[0].size(); j++){
        cout<<ans[i][j]<<" ";
    } cout<<endl;
  }
  
  
  
}

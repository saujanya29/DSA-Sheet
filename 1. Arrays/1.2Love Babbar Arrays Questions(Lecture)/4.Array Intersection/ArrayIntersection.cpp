#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	  vector<int> ans;
      int i =0;
	  int j =0;
	  while(i<n && j<m){
		  if(arr1[i] == arr2[j]){
			   ans.push_back(arr1[i]);
			   i++;
			   j++;
		  }
		else if(arr1[i]<arr2[j]){
			  i++;
		  }else{
			  j++;
		  }
	  }
	  return ans;
}

int main(){

 vector<int> arr1 = {1,4,5,5};
  vector<int> arr2 = {1,2,3,4,5,5};

  vector<int> ans = findArrayIntersection(arr1,arr1.size(),arr2,arr2.size());
  for(int i = 0 ; i<ans.size(); i++){
   
   cout<<ans[i]<<" ";
  }
  
  
  
    

}

#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

vector<int> reverse(vector<int> &arr){
	int n = arr.size();
	int i =0;
    int j = n-1;
	
	while(i<=j){
		swap(arr[i],arr[j]);
		i++;
		j--;
	}	
    return arr;
}



vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.

/*
   Approach 1: 

     int i = n-1;
    int j = m-1;
    vector<int> ans;
    int carry = 0;
    
    while(i>=0 && j>=0) {
        int val1 = a[i];
        int val2 = b[j];
            
        int sum = val1 + val2 + carry;   
        
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    
    // first case
    while(i>=0) {
        int sum = a[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
    
     // second case
    while(j>=0) {
        int sum = b[j] + carry;
        carry = sum/10;
        int value = sum%10;
        ans.push_back(value);
        j--;
    }
    
     // second case
    while(carry != 0) {
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }
   
    //print(ans);
  return reverse(ans);
 */







// Approach 2: 

     reverse(a);
	 reverse(b);

	vector<int> Ans ;
	//= FindSum (a,n,b,m);
     int index =0;
	 int carry = 0;
	 
	
	
	
	while(index <n || index <m || carry != 0){
         
		 // value in first array
		 int val1 =0;
		 if(index<n){
			 val1 = a[index];
		 }
		 int val2 = 0;
		 if(index<m){
             val2 = b[index];
		 }

		
		int sum = val1+val2+carry;
		int digit  =sum%10;
         carry = sum/10;
		 Ans.push_back(digit);
         index++;
	}

   
    return reverse(Ans);

}

int main(){

    vector<int> a ={1,3,0};
     vector<int> b ={2,5};

     vector<int> ans = findArraySum(a,a.size(),b,b.size());
     for(int i = 0 ; i<ans.size(); i++){
     cout<<ans[i]<<" ";
     }
     
     
     


    

}

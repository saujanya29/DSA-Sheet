#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<stack>
#include<unordered_map>
#include<algorithm>
using namespace std;

//FUNCTION 1--->
/*function to find the prev smaller element
 tip - dry run to understand it  */


vector<int> PrevSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    stack<int> st;
    st.push(-1);
   vector<int>ans(n);
    for(int i = 0; i<n;i++){
     
     int curr  =  arr[i];
     while(st.top()>=curr){
         st.pop();
     }
     ans[i] = st.top();
     st.push(curr);
    }
    return ans;
}

//FUNCTION 2 --->
/* index of Previous smaller element 
tip - dry run to understand it  */

vector<int> PrevSmallerElementIndex(vector<int> &arr, int n)
{
    // Write your code here.
    stack<int> st;
    st.push(-1);
   vector<int>ans(n);
    for(int i = 0; i<n;i++){
     
     int curr  =  arr[i]; // storing the element from end of array in curr variable

     // check if top of stack is not -1 and 
     while((st.top() != -1 ) && arr[st.top()]>=curr){  // st.top are indexes of elements 
         st.pop();
     }
     ans[i] = st.top();
     st.push(i);
    }
    return ans;
}



int main(){

    
    vector<int> arr = {2,3,1,4};
    vector<int> ans  = PrevSmallerElementIndex(arr,arr.size());
    for(int i = 0 ; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

}

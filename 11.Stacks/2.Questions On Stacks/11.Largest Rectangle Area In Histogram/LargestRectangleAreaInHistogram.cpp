#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<stack>
#include<unordered_map>
#include<algorithm>
using namespace std;



vector<int> nextSmallerElementIndex(vector<int> &arr, int n)
{
    // Write your code here.
    stack<int> st;
    st.push(-1);
   vector<int>ans(n);
    for(int i = n-1; i>=0;i--){
     
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


    int largestRectangleArea(vector<int>& heights) {
        
      int n = heights.size();

      vector<int> next(n);
      next = nextSmallerElementIndex(heights,n);

     vector<int> prev(n);
      prev = PrevSmallerElementIndex(heights,n);

      int area  =INT_MIN;

      for(int i =0;i<n;i++){
         
         int l = heights[i];   // height of bar at index i

       /*if next smaller element index is not found then eqaute
         next smaller index to n(end of array)                 */

         if(next[i] == -1){
             next[i] = n;   
         }
        
        // calculate the bredth or horizotal distance 
        int b  = next[i] - prev[i] -1;

        int newArea = l*b;
        area = max(area,newArea);
 
      }

     return area;
    }



int main(){

    vector<int> heights = {2,1,5,6,2,3};
    cout<<largestRectangleArea(heights);

    

}

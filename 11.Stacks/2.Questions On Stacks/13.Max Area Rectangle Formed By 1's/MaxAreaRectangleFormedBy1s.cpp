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


    int largestRectangleArea(vector<int> &heights ,int n) {
        
    //  int n = heights.size();

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
  
  
    int maxArea(vector<vector<int>> M, int n, int m) {
        // Your code here
        
        // computer area for the first row
        int area =  largestRectangleArea(M[0],m);
        
        // add elements of prev row in next row and compute the area 
        
        for(int i =1; i<n;i++){
            
            for(int j = 0 ; j<m;j++){
                
                // update each row by adding prev row val
               if(M[i][j] != 0){
                   M[i][j] = M[i][j]+ M[i-1][j];
               } 
               else{
                   M[i][j] =0;
               }
            }
           // entire row is updated now 
           area = max(area,largestRectangleArea(M[i],m));
            
        }
       
       return area;
        
    }



int main(){
     
    vector<vector<int>> M ={{0,1,1,0}, {1,1,1,1}, {1,1,1,1}, {1,1,0,0}};

   cout<< maxArea(M,4,4);



}

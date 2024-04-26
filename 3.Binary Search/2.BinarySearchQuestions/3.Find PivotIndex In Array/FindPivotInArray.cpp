#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

// pivot is the lowest element in the array 
int findPivot(int * arr,int n){

   int s = 0;
   int e = n-1;
   int mid = s + (e-s)/2;
   while(s<e){   // when this loop will terminate s will be our pivot element

       if(arr[mid] >= arr[0]){
        // means mid is on first line in graph
         s = mid+1;
       } 
       else{
        // we are not eqauting e to mid-1 as it may possible that e is on mid 
        //so in that situation mid-1 will lead e to the first line and s and e both will lie 
        //on same line and so wont be able to find pivot 

         e = mid ;
       }
       mid = s + (e-s)/2;
    }  
    return s;
}
int main(){
    int arr[7] = {7,9,1,3,4,5,6};
  cout<< findPivot(arr,7)<<endl;
    

}

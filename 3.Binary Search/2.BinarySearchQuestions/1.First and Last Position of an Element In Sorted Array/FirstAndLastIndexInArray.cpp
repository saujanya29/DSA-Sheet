#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

int FirstOccurance(vector<int>& arr, int n, int k){
    
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans =-1;
    while(s<=e){
        
        if(arr[mid] == k){
            ans = mid;
            // after getting k we will search is there any occurance of k in left part 
            // if present we will update it (e = mid -1 will search in left part )
            e = mid -1 ;
            
        }

        else if(arr[mid]<k){
            s = mid+1;
        }
        else if(arr[mid]>k){
            e= mid-1;
        }

        mid = s + (e-s)/2;
    }
  return ans;

    
}


int LastOccurance(vector<int>& arr, int n, int k){
    
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans =-1;
    while(s<=e){
        
        if(arr[mid] == k){
            ans = mid;
            // after getting k we will search is there any occurance of k in right part 
            // if present we will update it (s = mid+1 will search in left part )
           s =mid+1;
            
        }

        else if(arr[mid]<k){
            s = mid+1;
        }
        else if(arr[mid]>k){
            e= mid-1;
        }

        mid = s + (e-s)/2;
    }
  return ans;

    
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int,int> p;
    p.first = FirstOccurance(arr,n,k);
    p.second = LastOccurance(arr,n,k);
    return p;
}




int main(){

    vector<int> arr = {0,0,1,1,2,2,2,2};
    pair<int,int> p  = firstAndLastPosition(arr,8,2);
    cout<<p.first <<" "<<p.second;

}

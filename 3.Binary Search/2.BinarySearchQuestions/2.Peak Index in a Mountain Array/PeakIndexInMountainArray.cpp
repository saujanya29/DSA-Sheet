#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

  int peakIndexInMountainArray(vector<int>& arr) {
        
        int s = 0;
        int e = arr.size()-1;
        int mid = s + (e-s)/2;

        while(s<e){     // because when s == e that index will be peak index
            if(arr[mid] < arr[mid+1]){
               s =mid+1;
            }
            else{
                e =mid;
            }
            mid = s + (e-s)/2;
        }
        return s;
        // this will be our peak index in mountain array
       
    }

int main(){

 vector<int> arr = {0,10,5,2};
 cout<<peakIndexInMountainArray(arr);
 



}

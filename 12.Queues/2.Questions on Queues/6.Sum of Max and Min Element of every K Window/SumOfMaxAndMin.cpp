#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<queue>
#include<unordered_map>
#include<algorithm>
using namespace std;


int SumOfMinMax(int * arr, int n, int k){

   deque<int> maxi(k);
   deque<int> mini(k);


    //processing first window

    for(int i= 0; i<k;i++){
       // popping if greater element is present 
       while(!maxi.empty() && arr[maxi.back()] <= arr[i]){
         maxi.pop_back();
       }
      // popping fi smaller element is present
       while(!mini.empty() && arr[mini.back()] >= arr[i]){
         mini.pop_back();
       }
   // push back the current element index
    maxi.push_back(i);
    mini.push_back(i);

    }
    int ans = 0 ;
    // storing ans for first window
    ans = arr[maxi.front()]+ arr[mini.front()];


    // for rest of the window
    for(int i = k ; i<n;i++){

       // removal of element in window
        if(!maxi.empty() && (i - maxi.front() >= k) ){
            maxi.pop_front();
        }
         
        if(!mini.empty() && (i - mini.front() >= k) ){
            mini.pop_front();
        }


        // Addition of element in window 
          while(!maxi.empty() && arr[maxi.back()] <= arr[i]){
         maxi.pop_back();
       }

       while(!mini.empty() && arr[mini.back()] >= arr[i]){
         mini.pop_back();
       }
     // push back index of curr element in queue
        maxi.push_back(i);
        mini.push_back(i);

    // store ans for this window and move to next window 
    ans += arr[maxi.front()]+ arr[mini.front()];
    }

    return ans;

}

int main(){

    int arr[7] = {2, 5, -1, 7, -3, -1, -2};
    int k = 4;
    cout << SumOfMinMax(arr, 7, k) << endl;

    

}

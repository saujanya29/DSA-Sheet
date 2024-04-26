#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;



void Solve(vector<int> &arr ,int k,int n){
    vector<int> ans;

    for(int i =k ;i<k+n;i++){
        ans.push_back(arr[i%n]);
    }
    arr= ans;
}

int main() {
    //Write your code here
    int n;
    cin>>n;

    vector<int>arr(n);
    // input
    for(int i = 0;i<arr.size();i++){
        cin>>arr[i];
    }
     // input no of rotation
    int k ;
    cin>>k;
  // output ans
     Solve(arr,k,n);
    for(int i = 0 ; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

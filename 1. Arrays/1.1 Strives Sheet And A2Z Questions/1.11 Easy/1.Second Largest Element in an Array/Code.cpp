#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for(int i = 0 ; i<n;i++){
        if(a[i]<mini){
            mini = a[i];
        }
        if(a[i]>maxi){
            maxi = a[i];
        }
    }
     int secMax =INT_MIN;
     int secMIn = INT_MAX;
     for(int i =0 ; i<n;i++){
        if(a[i]<secMIn && (a[i] != mini) ){
            secMIn = a[i];
        }
        if(a[i]>secMax && (a[i] != maxi)){
            secMax = a[i];
        }
    }

   vector<int> ans ;
   ans.push_back(secMax);
   ans.push_back(secMIn);
    return ans;
}

int main(){

    vector<int> a ={1,2,4,6,7,5};
    int n=a.size();
    vector<int> ans  = getSecondOrderElements(n,a);
    for(int i = 0 ; i<ans.size(); i++){
    cout<<ans[i]<<" ";
    }
    
    
    
   // return 0;

}

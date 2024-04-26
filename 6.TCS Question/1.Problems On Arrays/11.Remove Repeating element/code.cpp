#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;


//Method 1 - Using nested and another array to store repeating element      T.C. -> O(n2)+O(n)  S.C. -> O(n)
 void findRepeatingElements(int arr[],int n) {
	    int cnt = 0;
	    int dup[n] ;
	    for(int i=0;i<n-1;i++) {
	        for(int j=i+1;j<n;j++) {
	            if(arr[i]==arr[j]) dup[cnt++] = arr[i];
	        }
	    }
	    cout<<"The repeating elements are: ";
	    for(int i=0;i<cnt;i++) 
	        if(dup[i] != dup[i+1]) cout<<dup[i]<<" ";
	}

// Method 2 - Using sorting technique (this method will ony applicable if occurance is at most 2)           T.C. -> O(n*lon(n))+O(n)  S.C. -> O(1)

void findRepeatingElements1(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    
    cout<<"The repeating elements are: ";
    for(int i=0;i<arr.size()-1;i++) 
        if(arr[i] == arr[i+1]) cout<<arr[i]<<" ";
}



// Method -3 Using Maps                                T.C. -> O(n)  S.C. -> O(n)                                

void findRepeatingElements2(vector<int>& arr){

    unordered_map<int,int> map ;
    for(int i =0 ; i<arr.size();i++){
        map[arr[i]]++;
    }

    for(auto x: map){
        if(x.second>1){
           cout<<x.first<<" ";
        }
    }
}


int main(){

    vector<int> arr = {1,1,1,2,3,4,4,5,2};
    findRepeatingElements1(arr);
    return 0;

}

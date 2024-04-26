#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
	int s = m+1;
	int e = arr.size()-1;

	while(s<e){
	      swap(arr[s],arr[e]);
		  s++;
		  e--;
	}


}

int main(){

    vector<int> arr = {1,2,3,4,5,6};
    reverseArray(arr,3);
    for(int i = 0 ; i<arr.size(); i++){
            cout<<arr[i]<<" ";
    }
    
    
    

}

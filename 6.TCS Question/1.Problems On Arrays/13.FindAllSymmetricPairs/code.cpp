#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;





int main(){

int n = 5;
 
int arr[][2] = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}}; 
cout << "The Symmetric Pairs are: " << endl;


// Method 1 - Using Nested loop and concept or 2D array

for(int i =0 ;i<n;i++){
    for(int j = i+1;j<n;j++){
        if(arr[i][1] == arr[j][0] && arr[i][0] == arr[j][1]){
            cout<<"("<<arr[i][1]<<","<<arr[i][0]<<")"<<" ";
            break;
        }
    }
}

// Method 2 - Using Pairs data structure

    

}

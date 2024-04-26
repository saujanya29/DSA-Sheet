#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

int findUnique(int *arr, int size)
{
    int ans = 0;
    //Write your code here 
    // Xor of all elements will return the unique element , all the element is present twice except one
   for(int i =0 ;i<size;i++){
       ans = ans ^arr[i];
       
}
    return ans;
}

int main(){

 int arr[5] = {1,1,3,3,4} ;
    cout<<findUnique(arr,5);
   
    

}

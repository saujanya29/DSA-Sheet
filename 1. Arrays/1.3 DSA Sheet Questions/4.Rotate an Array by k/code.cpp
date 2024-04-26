#include<iostream>
#include<vector>
using namespace std;


void rotate(int arr[], int n)
{
    
    // vector<int> vec;
    
    // vec.push_back(arr[n-1]);
    
    // for(int i =0 ;i<n-1; i++){
    //      vec.push_back(arr[i]);
    // }
     
    // for(int i =0 ;i<n; i++){
    //      arr[i] = vec[i];
    // }
    
   //  Alternative 
    vector<int> vec(n);
    
    for(int i=0 ; i<n; i++){
        vec[(i+1)%n] = arr[i];
    }
    
    for(int i =0 ;i<n; i++){
         arr[i] = vec[i];
    }
    
    
}

int main(){

    int arr[5] = {2,1,0,1,0};
    rotate(arr,5);

   for(int i = 0 ; i<5; i++){
   
     cout<<arr[i]<<" ";
   }
   
   
   

}

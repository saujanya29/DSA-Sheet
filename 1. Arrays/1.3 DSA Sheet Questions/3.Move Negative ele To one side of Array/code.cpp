#include <iostream> 
using namespace std;

void ReArrange(int arr[] ,int n ){

    int j= 0;
    for(int i = 0; i< n;i++){

        if(arr[i]<0){
        
              swap(arr[i],arr[j]);
                j++;
        }
    }


}

 // Alternative - 
// Steps -

// 1. Check If the left and right pointer elements are negative then simply increment the left pointer.
// 2. Otherwise, if the left element is positive and the right element is negative then simply swap the elements, and simultaneously increment and decrement the left and right pointers.
// 3. Else if the left element is positive and the right element is also positive then simply decrement the right pointer.
// 4. Repeat the above 3 steps until the left pointer ≤ right pointer.

 void ShiftAll (int arr[],int l, int r){

    while(l<=r){

        if(arr[l]<0 && arr[r]<0 ){
            l++;
        }
        else if(arr[l]>0 && arr[r]<0){
             swap(arr[l],arr[r]);
             l++;
             r--;
        }
        else if(arr[l]>0 && arr[r]>0){
            r--;
        }
        else{
            r--;
            l++;
        }

    }



 }

int main() {
 

 int arr[9] = {-1, 2, -3, 4, 5, 6, -7, 8, 9 };

//    ShiftAll(arr,0,8);
    ReArrange( arr ,9 );
   for(int i = 0; i<9;i++){
    cout<<arr[i]<<" ";
}
}
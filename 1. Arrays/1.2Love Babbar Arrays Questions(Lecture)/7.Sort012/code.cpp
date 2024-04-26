#include <iostream> 
using namespace std;

void sort012(int a[], int n)
    {
        // code here
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        
        for(int i =0 ; i<n ;i++){
            if(a[i] == 0){
              count0++;
            }
            else if(a[i]==1){
                count1++;
            }
            else if(a[i] == 2){
                count2++;
            }
        }
          
          int index = 0;
      
        for(int i =0 ;i< count0 ; i++){
            a[index] =0 ;
            index++;
        }
         for(int i =0 ;i< count1; i++){
            a[index] = 1;
            index++;
        }
         for(int i =0 ;i< count2 ; i++){
            a[index] = 2;
            index++;
        }
    
    }
    

    // ALTERNATIVES 


    //  void sort012(int a[], int n)
    // {
    //    int i = 0;
       
    //    // arranging 0's
    //    for(int j = 0; j<n;j++){
    //        if(a[j] == 0){
    //            a[j] = a[i];
    //            a[i] = 0;
    //            i++;
            
    //        }
    //    }
       
       
    //       // arranging 1's
    //    for(int j = i; j<n;j++){
    //        if(a[j] == 1){
    //            a[j] = a[i];
    //            a[i] = 1;
    //            i++;
            
    //        }
    //    }
        
    // }
    
  

int main() {
 
int arr[5] = {2,1,0,1,0};
sort012(arr,5);

for(int i = 0; i<5;i++){
    cout<<arr[i]<<" ";
}
 cout<<endl<<"hello World"<<endl;
    
}
#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;


 bool isPowerOfTwo(int n) {
        int ans = 1 ;                // 2 to power 0 = 1 this will be first check
        for(int i =0;i<=30;i++){

            // check if ans is equal to n or not
            if(ans == n) return true;

            /* here ans*2 can exceed limits of int data type in the last iteration
            so we will apply condition to check
            */ 
            if(ans<INT_MAX/2 ){
                ans = ans*2;

            }
                
        }
        // otherwisew return false
        return false;
    }

int main(){
 

     int x;
     cin>>x;
     cout<<isPowerOfTwo(x)<<endl;
    

}

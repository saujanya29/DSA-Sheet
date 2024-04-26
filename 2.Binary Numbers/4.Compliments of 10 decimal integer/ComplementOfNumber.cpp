#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

 int bitwiseComplement(int n) {
        /* Algorithm 
         Step1 : Create Mask 
         Step2 : Find the complement of number 
         Step3 : take AND of complement and Mask 
        */

       // Step1 : Create Mask 
       int m =n;
       int mask =0;
       // edge case 
       if(n==0)
        return 1;
       
       while(m!=0){


           // when mask is left shifted and made OR with 1 will make that byte 1
           // at end of loop there will be 1s equal to number of times loop run

           mask = (mask<<1) | 1;
           m = m>>1; // right shifted to get divided by 2 till becomes 0
       }

    // Step3 : take AND of complement and Mask 
       int ans = ~n & mask;
       return ans;
       

    }

int main(){

      int x ;
      cin>>x;
      cout<<bitwiseComplement(x);


}

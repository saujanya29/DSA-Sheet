#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<cmath>
#include<unordered_map>
#include<algorithm>
using namespace std;

// Method -1 Brute Force Approach 

void PrimeFactors(int n){
   
   for(int i = 2; n>1; i++){ // iterate loop till n is not equal to zero
  // checking if i is the factor of n or not 

      if(n%i == 0){
       // if it is factor of then keep diving n until it can not ne divided i.e. (n%i != 0)
        while(n%i == 0){
            cout<<i<<" ";
            n = n/i;  // keep updating n
        }
      } 
   }  
// this will print all the prime factors
}


// Method - 2 optimised approach 

 void printPrimeFactors1(int n) {

    cout << "Prime Factors : ";
    for (int i = 2; i*i< (n), n > 1; i++) {
   // just one change that iterate i  only till sqrt(n)
      if (n % i == 0) {

        while (n % i == 0) {

          cout << i << " " ;
          n = n / i ;
        }
      }
    }
  }

int main(){

    int n = 36;
    cout <<"Prime Factors of "<<n<<" are: ";
    printPrimeFactors1(n);
    return 0;   

}

#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<cmath>
#include<unordered_map>
#include<algorithm>
using namespace std;

void Divisor(int n){
   
   for(int i = 1 ; i<sqrt(n); i++){
   
      if(n%i ==0){
         
         if(i*i == n){
            cout<<i<<" ";
         }
        cout<<i<<" "<<n/i<<" ";
      }
   }
}

int main(){

 
    int n = 14;
    cout <<"Factors of "<<n<<" are: ";
    Divisor(n);
    return 0;

}

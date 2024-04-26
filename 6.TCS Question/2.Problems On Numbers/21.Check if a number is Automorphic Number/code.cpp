#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<cmath>
#include<unordered_map>
#include<algorithm>
using namespace std;

// Automorphic Number --> A number is called an Automorphic number if and only if its square ends in the same digits as the number itself.

bool IsAutomorphoic (int n){
    int sq = pow(n,2);

    while(n>0){
       int lastDigit = n%10;
       if(lastDigit =! (sq%10)){
        return false ;
       }
       n = n/10;
       sq = sq/10;

    }
    return true;
}

int main(){

    int n = 76;
    if(IsAutomorphoic(n)){
        cout<<"Number is Automorphic "<<endl;
    }
    else{
         cout<<"Number is Non-Automorphic "<<endl;
    }


}

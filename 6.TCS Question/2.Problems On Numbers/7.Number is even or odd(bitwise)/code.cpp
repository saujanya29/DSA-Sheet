#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

/*
Even Number: The last bit of even number is always 0.
Odd Number: Last bit of the odd number is always 1.
*/

/*
Approach 1 - using bitwise operators
-->  Take AND of n with 1 , 
--> AND of 1 with even number is zero and with odd numbers is one 
--> If it is 0 then print even otherwise odd.
*/ 


bool isEven(int n){
    if((n & 1) == 0){
        return true;
    }else{
         return false;
    }
}

int main(){

    int n = 10;
    if(isEven(n)){
        cout<<"number is even"<<endl;
    }
    else{
         cout<<"number is odd"<<endl;
    }
}

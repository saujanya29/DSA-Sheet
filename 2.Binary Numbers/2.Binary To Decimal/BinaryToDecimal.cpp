#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<cmath>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main(){

//Binary To Decimal
int n = 00011111; // consider it as binary number 
int number = 0;
int i =0;
while(n!= 0){
    int digit = n%10;
     number = digit*pow(2,i) + number;
     n = n/10;
     i++;

}
cout<<number<<endl;
    

}

#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<cmath>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main(){


// decimal to binary 

int n =10;

// Approach 1 - dividing by 2
int number =0;
int i =0;
while(n !=0){
     
    int bit = n&1;
    number = bit * pow(10,i)+number;
    n= n>>1;
    i++;

}
cout<<number<<endl;

    

}

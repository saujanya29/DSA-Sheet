#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

void PrintFib(int n){
    int a = 0;
    int b  =1;
    cout<<a<<" "<<b<<" ";
    
    for(int i = 0 ; i<n; i++){
    
       int c = a+b;
       cout<<c<<" ";
       a= b;
       b=c;
    }
    
    
    
}

int main(){

    int n  = 5;
    PrintFib(5);

}

#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

// Methof 1 - using functions

int func(int n ,int sum){

    if(n<1){
       
        return sum;
    }

    func(n-1,sum+n);
}

// Method 2 -  using recursive functions

int funcR(int n){
    if(n==0){
        return 0;
    }

    return n+funcR(n-1);
}

int main(){

  int n = 3;
  cout<<funcR(n)<<endl;
  return 0;

    

}

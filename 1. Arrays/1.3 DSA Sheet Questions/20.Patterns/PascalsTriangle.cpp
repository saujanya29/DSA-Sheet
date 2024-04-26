#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int factorial (int n){
    int fact =1;
    for(int i =1;i<=n;i++){
        fact *=i;
    }
    return fact;
}

int nCr(int i,int j){
     
     int ans;
     ans = factorial(i)/(factorial(i-j)*factorial(j));
     return ans;

}

int main(){

    int n ;
    cin>> n;

    for(int i =0;i<n;i++){

        for(int j=1 ;j<=n-i;j++){
            cout<<" ";
        }
        for(int j =0;j<=i;j++){
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }

}

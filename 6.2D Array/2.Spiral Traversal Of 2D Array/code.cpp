#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    int n ;
    int m;
    cin>> n>>m;

    int arr[n][m];
    for(int i = 0 ; i <n;i++){
        for(int j = 0; j<m;j++){

           cin>>  arr[i][j] ;
        }
    }


    int RS = 0;
    int RE = n-1;
    int CS = 0;
    int CE = m-1;


    while(RS<=RE && CS<=CE){
        for(int i = RS ;i<=RE;i++){
            cout<<arr[i][CS] <<" ";
        }
        CS++;

        for(int i = CS ;i<=CE;i++){
            cout<<arr[RE][i]<<" ";
        }
        RE--;
        for(int i = RE ;i>=RS;i--){
            cout<<arr[i][CE] <<" ";
        }
        CE--;
        for(int i = CE ;i>=CS;i--){
           
            cout<<arr[RS][i]<<" ";
        }
        RS++;
    }
}

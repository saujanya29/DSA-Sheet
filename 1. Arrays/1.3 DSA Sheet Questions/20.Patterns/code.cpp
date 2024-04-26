#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    
    int n ;
    cin>>n;

    for(int i = 1;i<=n;i++){
        int k = i;
        for(int j = 1 ; j<= 2*n-1;j++){
             
            if(j<= n-i ){
                cout<<" ";
            }

            else if(j<=n){
                cout<<k--;
                if(k==0){
                    k=1;
                }
            }
            else if(j<=n+i-1){
                  cout<<++k;
            }
            // else if(j>=n-1 && j<=n+i){
            //     cout<<k--;
            // }
            // else {
            //     cout<<" ";
            // }
        }
        cout<<endl;
    }

}

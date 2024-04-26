#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int GCD(int a , int b ){
      
    int size = (a<b) ? a:b;
    int ans ;
    for(int i = 1;i<=size ;i++){
         if((a%i == 0) && (b%i==0)){
            ans = i;
         }
    }
    return ans;
}

int main(){
// int a =7;
// int b =9;
// int size = (a<b) ? a:b;
// cout<<size<<endl;
    

    int a,b;
    cin>>a>>b;

    int ans = GCD(a,b);
    cout<<ans<<endl;

}


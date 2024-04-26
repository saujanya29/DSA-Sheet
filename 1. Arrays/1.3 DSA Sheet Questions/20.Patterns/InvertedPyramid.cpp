#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){


int n;
cin>>n;

for(int i=1;i<=n;i++){
     for(int j=1 ;j<=n-i+1;j++){
      cout<<i;
     }
    cout<<endl;
}
    

}

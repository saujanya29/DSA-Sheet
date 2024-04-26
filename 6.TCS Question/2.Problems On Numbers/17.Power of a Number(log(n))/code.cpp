#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;


/*

Approach:

--> Maintain a variable ans to store the final answer.
--> If k is even,square n and divide k by 2.as nk can be written as (n2)k/2  i.e (n*n)k/2.
--> If k is odd,multiply ans with n and reduce k by 1,as nk can be written as n*(n)k-1.
--> Print the ans.

T.C. - O(Log(N)) 

*/

int main(){

int n  = 2 ; int k =6;
int ans = 1;
while(k!=0){
    if(k%2 == 0){
        n = n*n;
        k = k/2;
    }else{
        ans = ans*n;
        k--;
    }
}

cout<<ans<<endl;
}

#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){

string s = "23GF";
int ans = 0;
int l = s.length();


// char ch = s[1];
// cout<< (int(ch) -48) << endl;

while(l > 0){

  switch(s[l-1]){
    
    case 'A':
    ans += 10 * (pow(17,s.length()-l));
    break;

    case 'B':
    ans += 11 * (pow(17,s.length()-l));
    break;
 
    case 'C':
    ans += 12 * (pow(17,s.length()-l));
    break;

    case 'D':
     ans += 13 * (pow(17,s.length()-l));
    break;

    case 'E':
   ans += 14 * (pow(17,s.length()-l));
    break;
    
    case 'F':
   ans += 15 * (pow(17,s.length()-l));
    break;

    case 'G':
    ans += 16 * (pow(17,s.length()-l));
    break;
    
    default :
    char ch = s[l-1];
    ans += (int(ch) -48) * (pow(17,s.length()-l));

     }





     l--;

 }

cout<<ans +1<<endl;

}

#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;



int Rev(int n)
{
   
   int rev = 0;
  int d;
   while(n!=0){
   d = n%10;
    rev = rev*10+d;
    n = n/10;
   }
   return rev;
}

int main(){

     int n = 472;
    cout<<"The reverse of the given number is: "<<Rev(n);
    return 0;

}

#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

/*
Intuition: The signed right shift operator ‘>>’ uses the sign bit to fill the trailing positions.
 For example, if the number is positive then 0 will be used to fill the trailing positions and if the number is negative 
 then 1 will be used to fill the trailing positions.

 Hence we can say that if a number is positive and we right shift it by 31,
 then we will get zero, and if the number is negative then we will get -1.

*/

/*
Approach:

-> Right Shift n by 31.
->If we get 0 then n is positive.
->If we get -1 then n is negative.
*/




 void check(int n) {
  if(n>>31 == 0){
    cout<<n<<" is positive"<<endl;
  }
  else{
    cout<<n<< " is negative" <<endl;
  }

  }

int main(){


  int n = 5;
    check(n);
    n = -6;
    check(n);
    

}

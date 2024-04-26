#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<cmath>
#include<unordered_map>
#include<algorithm>
using namespace std;

// Method 1 - Basic approach                         T.C. - O(N)  S.C. - O(1)

/*
A perfect number is defined as a number that is the sum of its proper divisors ( all its positive divisors excluding itself). 
*/

bool isPerfect(int n) {

  int sum = 0;
  for (int i = 1; i <= n - 1; i++) {
    if (n % i == 0)
      sum = sum + i;
  }
  if (sum == n)
    return true;
  else return false;
}




// Method 2 - efficient approach                         T.C. - O(sqrt(N))  S.C. - O(1)

/*We can use this elegant mathematical property that if n is divisible by k, then n will be also divisible by (n/k).
For example, 28 is divisible by 4, also 28 is divisible by (28/4)=7
*/

bool isPerfect(int n){
   int sum = 0;
  for(int i = 1; i <=sqrt(n); i++){
    if(n%i == 0){
        if( i*i == n || i ==1){  
          sum += i ;
           /*Note - Please note that if ( i* i ) == n or i==1 , then we will add only i to the sum as 
                    we don’t want to add i two times/ add the number itself to the sum. 
           */
        }else{
             sum = sum + i + (n/i);
        }
    }  
  }
    cout<<sum<<endl;
   if(sum == n) return true;
    else false;
}


int main(){


bool ex1 = isPerfect(6);
	bool ex2 = isPerfect(15);
	bool ex3 = isPerfect(28);
	
	if(ex1== true){
	    cout<<"6 is a perfect number"<<endl;
	}
	else cout<<"6 is not a perfect number"<<endl;
	
	if(ex2== true){
	    cout<<"15 is a perfect number"<<endl;
	}
	else cout<<"15 is not a perfect number"<<endl;
	
	if(ex3== true){
	    cout<<"28 is a perfect number"<<endl;
	}
	else cout<<"28 is not a perfect number"<<endl;
	
	return 0;
    

}

#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<cmath>
#include<unordered_map>
#include<algorithm>
using namespace std;

// Method 1 - brute force approach    T.C. - O(N)  S.C. - O(1)
bool isPrime(int N) {
  for (int i = 2; i < N; i++) {
    if (N % i == 0) {
      return false;
    }
  }
  return true;
}


// Method 2 - Optimised Approach      T.C. - O(sqrt(N))   S.C. - O(1)

bool isPrime1(int N) {
  for (int i = 2; i < sqrt(N); i++) {
    if (N % i == 0) {
      return false;
    }
  }
  return true;
}




int main(){
 
 
 int n = 11;

  bool ans = isPrime1(n);
  if (n != 1 && ans == true) {
    cout << "Prime Number";
  } else {
    cout << "Non Prime Number";
  }
  
    

}

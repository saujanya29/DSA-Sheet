#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<cmath>
#include<unordered_map>
#include<algorithm>
using namespace std;

// method 1 - using loops 

float SumofGP(float a, float r, int n)
{
    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += a;
        a *= r;
    }
    return sum;
}


float SumofGP1(float a, float r, int n)
{
     float sum = a *(( pow(r,n) - 1 ) / (r-1));
     return sum;
}


int main(){

float a = 2;     // First Term of G.P.
  float r = 1.5; // Common Ration of G.P.
  int n = 4;     // Number of terms in a G.P.
  cout << "Sum of GP Series is "<<SumofGP1(a, r, n);
  return 0;
    

}

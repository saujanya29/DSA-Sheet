#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

// method 1 - using loops 

float sumofAp(float a, float d, int n)
{
    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += a;
        a += d;
    }
    return sum;
}

// method 2 - using formula 

float sumofAp(float a, float d, int n)
{
     float sum = (n / 2.0) * (2.0 * a + (n - 1) * d);
    return sum;

}

int main(){

float a = 1.5, d = 3;
int n = 5;
cout << "Sum of Given Ap Series: " << sumofAp(a, d, n) << endl;
    

}

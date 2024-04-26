#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

/*
 inline function - Defination & advantage

Defination -> When the inline function is called whole code of the inline 
function gets inserted or substituted at the point of the inline function call. 

function call is replaces by function ki body se during time of completion.

Advantage -> 
1. reduce memory uses 
2. function call overhead doesnt occur

*/

inline int getMax(int& a, int& b) {
    return (a>b) ? a : b;
}

int main(){

     int a = 1, b = 2;
    int ans = 0; 

    ans = getMax(a,b);
    cout << ans << endl;

    a = a + 3;
    b = b + 1;

    ans = getMax(a,b);
    cout << ans << endl;

}

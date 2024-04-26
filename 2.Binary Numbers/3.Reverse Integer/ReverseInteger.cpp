#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

 int reverse(int x) {
        int ans = 0;
        while(x!= 0){

            int digit = x%10;
            // here checking int doesnt exceeds its limits , if limit exceeds return 0

            /* 
            here we could have two options to check limits
            1.-> ans * 10 < INT_MAX , here ans*10 could exceed limits so we will check it like 2nd condition
            2.(ans > INT_MAX/10) || (ans < INT_MIN/10) this will be correct way to check the condition
            */
            // if((ans > INT_MAX/10) || (ans < INT_MIN/10)){  
            //     return 0;
            // }
            ans = ans*10+digit;
            x = x/10;
        }

        return ans;
    }

int main(){

    int x;
    cin>> x;
    cout<<reverse(x);

}

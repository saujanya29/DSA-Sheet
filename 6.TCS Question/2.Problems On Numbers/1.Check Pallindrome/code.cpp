#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

int reverse(int x){
    int y = 0;
   while(x>0){

     //Extract the last digit
     int digit = x%10;
     //Appending last digit
     y = y*10 + digit;
    // Shrinking X by discarding the last digit
     x = x/10;
   }
   return y;
}

int main(){

    int x = 121;
    int dummy = x;
    int y  = reverse(x);
    if(dummy == y){
    cout<< "Number is pallindrome"<<endl;
    }
    else{
        cout<< "Number is not pallindrome"<<endl;
    }

}

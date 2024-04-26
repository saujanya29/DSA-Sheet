#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

bool isPallindrome(int n){
   int reverse = 0;
   int x = n;

    while(x>0){

     //Extract the last digit
     int digit = x%10;
     //Appending last digit
     reverse = reverse*10 + digit;
    // Shrinking X by discarding the last digit
     x = x/10;
   }
   if(reverse == n) return true;
   return false; 
}

int main(){


    int min = 50;
    int max = 100;


    for(int i= min ; i< max ; i++){
        if(isPallindrome(i)){
            cout<<i<<" ";
        }
    }
    
    
    

}

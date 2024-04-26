#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<cmath>
#include<climits>
#include<unordered_map>
#include<algorithm>
using namespace std;


//   important Method for the finding occurance  --- T.

/* after applying one extra condition in the code below this will also take care of 
   cases where two character occur maximum times at same time and print the lexicographically smaller character
*/

char getMaxOccCharacter(string s){
    int arr[26] = {0};

    for(int i = 0 ; i<s.length(); i++){
        char ch = s[i];

        int number = 0;
        number = ch - 'a';
        arr[number]++;    
    }
    int maxi = -1;
    int ans  = 0;
    for(int i = 0 ; i<26; i++){
        if(arr[i]>maxi){
        ans = i;
        maxi = arr[i];
        }
        //  This below if condition will take care of cases where two character occur maximum times at same time
        //   and print the lexicographically smaller character.
        if(arr[i] == maxi){
            if((i+'a') <(ans+'a')){
                ans=i;
                maxi = arr[i];          
         }
        }
    
    }

    return ('a'+ans);
    
    
}


/*
Method 2 - using maps          

 This appraoch take care of cases where two character occur maximum times at same time
and print the lexicographically smaller character.

*/
 char getMaxOccuringChar(string str)
    {
        // Your code here
        
        // string s = {a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z};
        unordered_map<char,int> mp;
        
        for(int i = 0 ; i<str.length();i++){
            mp[str[i]]++;
        }
        char c;
        int max = INT_MIN;
        for(auto x: mp){
            if(x.second > max){
                max = x.second;
                c = x.first;
            }
          // print the lexicographically smaller character.
            if(x.second == max){
                if( int(c)> int(x.first)){ // here we checked which character is lexicographically smaller
                    c = x.first;
                }
            }
                
            
        }
        return c;
    }






int main(){

string s = "aabbbffffeeee";
 char ans = getMaxOccCharacter(s);
// for method 2
//char ans = getMaxOccuringChar(s);
 cout<<ans<<endl;   

}

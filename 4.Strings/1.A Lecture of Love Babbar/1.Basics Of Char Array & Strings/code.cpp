#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

//Convert To LoverCase (test case can have both lower and uoper case letters)

void To_lower(string str){

for(int i = 0 ; i<str.length(); i++){
    if(str[i] >= 'a' && str[i] <= 'z'){
      cout<<str[i];
    }else{ 
        char ch = (str[i]-'A')+'a';  // alternative for this line -->  str[i] += 32;
        cout<<ch;
    }
}
}

// changing any character to lowercase 
char To_Lower(char ch){
    if(ch >= 'a' && ch <='z'){
        return ch;
    }
    else{
        char temp = ch - 'A'+'a';
        return temp;
    }
}


// Changing to UpperCase
void Upper_Case(string str){

for(int i = 0 ; i<str.length(); i++){

if(str[i] >= 'A' && str[i]<= 'Z'){
        cout<<str[i];
    }else{
         char ch = str[i] -'a'+'A';    // alternative for this line -->  str[i] -= 32;
        cout<<ch;
    }
}
}



// Check Pallindrome  -- we can find reverse and then can check pallindrome

bool CheckPallindrome(string str){
 int s = 0;
 int e = str.length()-1;

 while(s<=e){
     if(To_Lower(str[s]) != To_Lower(str[e])){
        return false ;
     }else{
        s++,e--;
     }
 }

}
int main(){

/*Some Basic Operations in String 

*/

string str  = "noon";
// To_lower(str);
// Upper_Case(str);
if(CheckPallindrome(str)){
  cout<<"sring is pallindrome";
}else{
     cout<<"sring is not pallindrome";
}
}

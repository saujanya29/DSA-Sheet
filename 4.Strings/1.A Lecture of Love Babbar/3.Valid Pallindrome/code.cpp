#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

// Method 1 - easy to understand but used extra string in this approach


// check character is valid or not 

bool valid(char ch){
    if((ch >= 'a' && ch <= 'z')  || (ch >= 'A' && ch <= 'Z')  || (ch >= '0' && ch <= '9')){
        return true;
    }
    else{
        return false;
    }
}

// convert into lowercase letters

char to_lowerCase(char ch){
    if((ch >= 'a' && ch <='z') || (ch >= '0' && ch <='9')){
        return ch;
    }
    else{
        char temp = ch - 'A'+'a';
        return temp;
    }
}

// check valid pallindrome 

bool Ispallindrome(string s){
     int st = 0;
    int e = s.length()-1;
     
     while(st<=e){
         if(s[st] != s[e]){
             return false;
         }else{
            st++,e--;
         } 
     }
     return true;
}

bool ValidPallindrome(string s){

    // faltu character hata do
    string temp ="";

    for(int i = 0 ; i<s.length(); i++){
         if(valid(s[i])){
            temp.push_back(s[i]);
         }
    }

    // lowercase mein kardo
    for(int i = 0 ; i<temp.length(); i++){
         temp[i] = to_lowerCase(temp[i]);
    }
     

   bool chk = Ispallindrome(temp);
   return chk;

}

/* Method 2 - My brute Force approach  (little complicated)   but this is in-place method 
 

void Solve(string &str){

    for(int i=0;i<str.length();i++)
	{   

        if (str[i] >= 'A' && str[i] <= 'Z')  {
            
             //checking for uppercase characters
			str[i] = str[i] + 32; 
        }

        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9'))   {
            //checking for lowercase characters and numeric values 
			continue;
       }  
     
       else{
           // deleting all other characters
         str.erase(str.begin()+i);
          i--;// when we delete a chaacters from string its size decreases means that index get one place back
       }

	}
    cout<<"\n The string in final ans: "<< str <<endl;
}

  bool isPalindrome(string s) {
       
        Solve(s);
        bool flag=0;
        for(int i =0; i<s.length();i++){
               if(s[i] != s[s.length()-1-i]){
                  flag = 1;
               }
        }
       
        if(flag == 1){
            return false;
        }else{
            return true;
        }

    }

*/

int main(){

    string s = "c1 O$d@eeD o1c";

   bool ans =  ValidPallindrome(s);
   if(ans){
    cout<<"string is valid pallindrome";
   }else{
    cout<<"string is not valid pallindrome";
   }
}

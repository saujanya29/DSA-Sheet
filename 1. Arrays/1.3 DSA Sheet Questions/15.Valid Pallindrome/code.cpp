#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

void lower_string(string str)
{
	for(int i=0;str[i]!='\0';i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')    //checking for uppercase characters
			str[i] = str[i] + 32;         //converting uppercase to lowercase
	}
	cout<<"\n The string in lower case: "<< str;
}

void Solve(string s){
   for(int i = 0 ; s[i] != '\0';i++){
       if(s[i]>= 'A' && s[i]<='Z'){
           s[i] = s[i]+ 32;
       }
       else{
           s.erase(s.begin()+i);
       }
   }
}


 bool isPalindrome(string s) {
        
        Solve(s);
        cout<<s<<endl;
        if(s.empty()){
            return true;
        }
        bool flag=0;
        for(int i =0; i<s.length();i++){
               if(s[i] != s[s.length()-i]){
                  flag = 1;
               }
        }
       
       return flag;

    }
   

int main(){

    
    string s = "A man, a plan, a canal: Panama";

   bool ans =  isPalindrome(s);
   if(ans == 1){
    cout<<"false"<<endl;
   }
   else{
    cout<<"true"<<endl;
   }

    

}

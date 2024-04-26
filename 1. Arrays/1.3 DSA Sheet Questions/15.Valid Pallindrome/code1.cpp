#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

void lower_string(string &str)
{
	for(int i=0;str[i]!='\0';i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')    //checking for uppercase characters
			str[i] = str[i] + 32;         //converting uppercase to lowercase
	}
	cout<<"\n The string in lower case: "<< str;
}

void Others(string &str){
     
     str.erase(remove(str.begin(), str.end(), ' '), str.end());
    for(int i=0;i<str.length();i++)
	{   

        if (str[i] >= 'A' && str[i] <= 'Z')  {
            
             //checking for uppercase characters
			str[i] = str[i] + 32; 
            // cout<<str[i]<<endl;
        }  

  
    else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9'))   {
            //checking for lowercase characters

			continue;
            
       }  
       
       else{
         str.erase(str.begin()+i);
         i--;
         cout<<"\n The string in this step: "<< str <<endl;
       }
      
	}
    cout<<"\n The string in final ans: "<< str <<endl;
}

 int isPalindrome(string &str){
    int flag = 0;
  
    for(int i =0; i<str.length();i++){
               if(str[i] != str[str.length()-i-1]){
                  flag = 1;
               }else{
                continue;
               }
        }

    //  for(int i =0; i<str.length();i++){
    //            if(str[i] != str[str.length()-i]){
    //               flag = 1;
    //            }
    //     }

        return flag;
 }
int main(){

     
    string s = "......a.....";
     lower_string(s);
    Others(s);
  
    
    

    int ans =  isPalindrome(s);
   if(ans == 1){
    cout<<"false"<<endl;
   }
   else{
    cout<<"true"<<endl;
   }

}

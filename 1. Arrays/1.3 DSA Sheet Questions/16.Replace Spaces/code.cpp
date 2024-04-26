#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

string ReplaceSpaces(string &str){

 string s = "@40";

for(int i = 0 ; i<str.length();i++){
		if(str[i] == 32){
			str.erase(str.begin()+i);
			// cout<<str<<endl;
            
			
			str.insert(i,s);
			// cout<<str<<endl;
            i+=3;
			
		}
} 
return str;
}

int main(){

 string str = "Coding Ninjas Is A Coding Platform";
 string s = "@40";

 string ans = ReplaceSpaces(str); 
 cout<<ans<<endl;

}

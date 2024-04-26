#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int Compress(vector<char>& chars){


char count = '1';
    for(int i = 0 ;i<chars.size();i++){
        if(( i+1 < chars.size()) && chars[i]== chars[i+1]  ){
            chars.erase(chars.begin()+i+1);
             count++;
             i--;
             
        }else{
            if(count != '1'){

                  chars[i+1] = count;
            }
           
            count = '1';
            i++;
        }
        
    }
return chars.size();


 int n =  chars.size();
// chars.erase(chars.begin()+1,chars.begin()+2);
    char ch = 49;
    string s = "";
    for(int i = 0 ; i< n;i++){
        if(chars[i] == chars[i+1]){
            chars.erase(chars.begin()+i+1);
            ch++;
           i--;
        }else{
           s.push_back(chars[i]);
           s.push_back(ch);
        }
    }
int i =0;
 for(int it : s){
    chars[i++] = it;
 }
  
return chars.size();


}

int main(){

vector<char> chars{'a','b','b','b','c','c','c'};

// vector<char> chars = {"a","a","b","b","b","c","c"};
// chars.erase(chars.begin()+1,chars.begin()+3);
int ans = Compress(chars);
cout<<ans<<endl;
    // for(int i = 0 ; i<chars.size(); i++){
    // cout<<chars[i]<<endl;
    // }
    
    
    

}

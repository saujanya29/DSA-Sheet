#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

void Reverse(char name[] , int n){
    int s = 0 ;
    int e = n-1;

    while(s<=e){
        swap(name[s++],name[e--]);
    }
}

int getLength(char name[]){
    int cnt = 0;
    for(int i = 0 ; name[i] != '\0'; i++){
       cnt++;
    }
    return cnt;
    
    
}

int main(){

    
    char name[20] ;     
    /*
    usually cin stops taking input when it hits the " " ,"tab", "enter"  ... 
    But cin.getline(name,20) will take complete input
    */

    // cin.getline(name,20); 
    cin>> name;
    int len = getLength(name);
    Reverse(name,len);                            
    cout<<name;

}

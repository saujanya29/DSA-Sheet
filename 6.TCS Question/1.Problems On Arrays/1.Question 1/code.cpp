#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    
int n ;
cin>> n;
int x = 0;
int y = 0;
int distance = 10;
char c = 'R';
while(n!=0){
     
     switch(c){
    
    case 'R':
    x = x+ distance;
    c = 'S';
    distance = distance + 10;
    break;

    case 'S':
    y = y+ distance;
    c = 'T';
    distance = distance + 10;
    break;
 
    case 'T':
    x = x - distance;
    c = 'U';
    distance = distance + 10;
    break;

    case 'U':
    y = y - distance;
    c = 'V';
    distance = distance + 10;
    break;

    case 'V':
    x = x+ distance;
    c = 'R';
    distance = distance + 10;
    break;



     }
  

    n--;
}

cout<< x <<" " << y << endl;
}

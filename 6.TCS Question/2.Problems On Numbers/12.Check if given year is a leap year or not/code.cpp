#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

/*
Intuition: A year is a leap year only if it satisfies the following condition.

--> The year is divisible by 400
--> The year is divisible by 4 but not by 100

*/


// Method 2 
bool yyear1(int year ){
    if((year%4 == 0) && (year%100 != 0)  || (year%400 == 0)){
        return true ;
    }else {
        return false;
    }
}




// Method 1 
bool yyear(int year)
{
    if(year % 400 == 0)
    return true;
    if(year % 100 == 0)
    return false;
    if(year % 4 == 0)
    return true;
    return false;
}

int main(){

    
    int year=1996;
    if(yyear1(year))
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;

}

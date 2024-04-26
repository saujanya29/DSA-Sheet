#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;


int& func(int a) {  
    /* this is bad practice as num variable 
     have no existance after this function
     */
    int num = a;
    int& ans = num;
    return ans;
}

int* fun(int n) {
    /* this is bad practice as pointer ptr
     have no existance after this function
     */
    int* ptr = &n;
    return ptr;
}

void update2(int& n) {
    // pass by reference 
    n++;
}

void update1(int n) {
    // pass by value
    n++;
}


int main(){


/*
int i = 5;

 Reference variable are like another name for variable
 Same memory & different names 
*/

/*
//creating a reference variable 

int &j =i;

cout<<i<<endl;  // 5
i++;      
cout<<i<<endl;   // 6
j++;           // value can be incremented using this reference variable as well
cout<<i<<endl;   //7
cout<<j<<endl;    //7

*/

int n = 5;

cout<<"Before "<<n<<endl; //5
update1(n);  // No updation as passed by value 
cout<<"After "<<n<<endl;  //5

cout<<"Before "<<n<<endl;  // 5
update2(n);   // Values gets updated as passed by reference 
cout<<"After "<<n<<endl;  // 6

}

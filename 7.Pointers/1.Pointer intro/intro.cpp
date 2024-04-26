#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main(){



 int num  = 5 ;

    cout << num << endl;

    // address of Operator - &

    cout <<" address of num is " << &num << endl;

    int *ptr = &num;

    cout << "Address is : " << ptr << endl;
    cout << "value is : " << *ptr << endl;

    double d = 4.3;
    double *p2 = &d;

    cout << "Address is : " << p2 << endl;
    cout << "value is : " << *p2 << endl;

    cout << " size of integer is " << sizeof(num) << endl;
    cout << " size of pointer is " << sizeof(ptr) << endl;
    cout << " size of pointer is " << sizeof(p2) << endl;




/*

int num =5 ;
int *p = &num;

cout<<p<<endl;
cout<<*p<<endl;

 int a = num;
    a++;
    cout<< num<<endl;
    cout<< a <<endl;
    //copying pointer
    int *q = p;
    cout<< p <<" "<<q<<endl;
    cout<< *p <<" "<<*q<<endl;
     cout<<&p <<" "<<&q<<endl;

    //if you increment the pointer value the variable will also increase
    cout<< (*p)++<<endl;
    cout<< (*p)<<endl;
    cout<< num <<endl;


    *p = *p+1;     //same as (*p)++ 
    cout<<" pointer"<< *p<<endl;
    cout<< p<<endl;
    p = p+1;          //this will show the address of next integer 
    cout<< p<<endl;
    cout<< *p<<endl;
    cout<<sizeof(*p);







*/

    

}

#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main(){

     int arr[10] = {23,122,41,67};

    
    cout<<"address of first memory block is: "<< arr <<endl;
    cout<<"address of first memory block is: "<< &arr[0] <<endl;
    cout<<"element of first memory block is: "<< arr[0] <<endl;
    cout<<"element of first memory block is: "<< *arr <<endl;
    cout<<"element of first memory block +1: "<< *arr +1 <<endl;        //it will increment the value by 1
    cout<<"second value : "<< *(arr +1) <<endl;      // it will give the next value 
    cout<<"element of first memory block +1: "<< *(arr) +1 <<endl;      //this will also increment the value by 1
    cout<<"third value: "<< arr[2] <<endl;         //it will give the third element
    cout<<"third value: "<< *(arr+2)<<endl;         //it will give the third element

    //arr[i] = *(arr+i) or i[arr] = *(i+arr)

    int i = 3;
    cout<< "value of i[arr] is -> "<< i[arr]<<endl;                        //it will give fourth value   
    
    

     //difference btn array pointer -> array takes more memory to store elements (in some devices sizeof(ptr) is 8 bytes)
     int temp[10] = {1,2};
    cout<<"value of temp -> "<<(temp)<<endl;
    cout<< "size of temp is -> " <<sizeof(temp)<<endl;
    cout<<"value of *temp -> "<<(*temp)<<endl;
    cout<< "size of *temp is -> " << sizeof(*temp)<<endl;          //size of first elememt
     cout<<"value of &temp -> "<<(&temp)<<endl;
    cout<< "size of &temp is -> " << sizeof(&temp)<<endl;         //size of address of first element
    
    int *ptr = &temp[0];
    cout<<"size of ptr is -> " <<sizeof(ptr)<<endl;           //size of pointer
    cout<< "value of ptr -> "<<ptr<<endl;    
    cout<< "size of *ptr is -> "<<sizeof(*ptr)<<endl;          //size of fisrt element 
    cout<< "value of *ptr -> "<<*ptr<<endl; 
    cout<< "size of &ptr is -> " <<sizeof(&ptr)<<endl;          //size of address of pointer
    cout<< "value of &ptr -> "<<&ptr<<endl;


    //arr = arr+1 is not possible , you cant change values in symbol table 

    int a[10] = {10,20,30};
    int *p = &a[0];
    cout<< "value of &a -> "<< &a<<endl;
    cout<<"value of a -> "<< a<<endl;
    cout<< "value of &a[0] -> "<<&a[0]<<endl;
    cout<< "value of &p -> "<< &p<<endl;
    //these two are different 
    cout<< "value of &(*p) -> "<<&(*p)<<endl;
    cout << "value of p  -> "<<p<<endl;
    p = p+1;
    cout <<p<<endl;


}

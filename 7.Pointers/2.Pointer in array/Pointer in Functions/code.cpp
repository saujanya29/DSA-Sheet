#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;



void print(int *p){
    cout<< *p<<endl;
}
void update(int *p){
   // p = p+1;
   //cout<<"inside function: "<<p<<endl;
   *p = *p+1;

}
int getsum(int*arr ,int n){ //getsum(int arr[] -> this is actually a pointer of arr not the actual arr so we can also write *arr)
    int sum = 0;
    for (int i = 0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}


int main(){
    int value = 5;
    int *p = &value;

    //print(p);


   cout<<"before:" <<*p <<endl;
   update(p);
   cout<<"after:"<<*p<<endl;

   int arr[5] = {1,2,3,4,5};
   cout<<getsum(arr,5)<<endl;;
   cout<<getsum(arr+3,2);   
    
       cout<<"before:" <<p <<endl;
   update(p);
   cout<<"after:"<<p<<endl;

    

}

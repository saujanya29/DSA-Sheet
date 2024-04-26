#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main(){

    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";

    cout<<arr<<endl;
    //attention here 
    cout<<ch<<endl;          //this will not print address it will print entire string

    char *c = &ch[0];
    //print entire string
    cout<< c<<endl;         

    char temp = 'z';
    char *p = &temp;
    cout<< p <<endl;   //it will give a weird value , this will print till the compiler doesnt found a null value (\0)
    return 0;

}

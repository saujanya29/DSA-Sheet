#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

int score = 15; // this is global varriable and accessible by all function

void a(int &i){
    cout<<i<<endl;
    cout<<score<< "in a"<<endl;
    score++;  
    // this global variable can be changed by
    // any function thus it is not used often 

}

void b (int &i){
    cout<<i<<endl;
    cout<<score<<" in b"<<endl;
}

int main(){
 
 cout<<score<<" in main"<<endl;
 int i =5;
 a(i);
 b(i);

 return 0;
    
 
}

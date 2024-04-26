#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;


void solve (string s ,int n){

    int countN = 0;
    int countO = 0;
    int countR = 0;
    int countE= 0;
    int countZ = 0;

   
     for(int i = 0 ; i<n ; i++){
        if(s[i] == 'n'){
            countN++;
        }
        else if(s[i] == 'o'){
            countO++;
        }
         else if(s[i] == 'r'){
            countR++;
        }
         else if(s[i] == 'e'){
            countE++;
        }
         else if(s[i] == 'z'){
          countZ++;
        }

     }

// counting ones 
int count1 = 0;
int count0 = 0 ;
while(countO != 0 && countN !=0 && countE != 0){
    // 
    count1++;
    countO--;
    countN--;
    countE--;
}

while(countZ != 0 && countE !=0 && countR != 0 && countO != 0){
    // 
    count0++;
    countZ--;
    countE--;
    countR--;
    countO--;
}

for(int i = 0 ; i<count1; i++){
    cout<<"1"<<" ";

}
for(int i = 0 ; i<count0; i++){
   cout<<"0"<<" ";
}



}

//10
// rezo neoo neo


int main(){

    int n ;
     cin >>n;

     string s;
     cin>>s;

     solve(s,n);

}

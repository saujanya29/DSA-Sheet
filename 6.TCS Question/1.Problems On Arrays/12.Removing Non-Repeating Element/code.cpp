#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;


// Method 1 - Using nested loop 
void findNonRepeatingElement(vector<int>& arr){

    
    for(int i = 0 ; i< arr.size();i++){
        bool check = false; 
        for(int j = 0 ; j<arr.size(); j++){   // j starts from zero so that it can scan whole array because esa ho skta h ki aage uss number ka repetition na ho but uske index ke pehle ho
          if( (i != j) && arr[i]==arr[j]){  // (i != j) additional condition for so that it dont consider element we are searching as its repetition 
            check = true;
            break;
          }
        }
        if(check == false){
            cout<<arr[i]<<" ";
        }
    }
}


//
// Method -2 Using Maps                                T.C. -> O(n)  S.C. -> O(n)                                

void findNonRepeatingElement1(vector<int>& arr){

    unordered_map<int,int> map ;
    for(int i =0 ; i<arr.size();i++){
        map[arr[i]]++;
    }

    for(auto x: map){
        if(x.second==1){
           cout<<x.first<<" ";
        }
    }
}

int main(){

    vector<int> nums = {1,2,-1,1,3,1};
    cout<<"Non-repeating numbers are: "<<endl;
    findNonRepeatingElement1(nums);

}

#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;


    bool checkEqual(int a1[26],int a2[26]){

        for(int i = 0; i<26;i++){
            if(a1[i] != a2[i]){
                return false;
            }
        }
        return true ;
    }





    bool checkInclusion(string s1, string s2) {
        
        // character count array
        int count1[26] ={0};

        for(int i =0 ; i<s1.length();i++){
           int index = s1[i] -'a';
           count1[index]++;
        }
        
        // traverse s2 in the sliding window of size equal to s1
        int i =0;
        int windowSize = s1.length();
        int count2[26]={0};

        while(i<windowSize && i<s2.length()){
            int index  = s2[i] -'a';
            count2[index]++;
            i++;
        }

        if(checkEqual(count1,count2)){
            return true;
        }
       
       // aage ke window ko process kro

       while(i<s2.length()){
         
         // next window mein jane par ek new char aayega uski occurance update krege in count2
         char NewChar = s2[i];
         int index = NewChar -'a';
         count2[index]++;
         
          // next window mein jane par ek old window ka char exclude krege so uski occurance reduce krege in count2
         char OldChar = s2[i-windowSize];
         index = OldChar - 'a';
         count2[index]--;

         i++;
            // then check is count1 and count 2 is eqaul .. if eqaul mean permutation of s1 is found in s2
         if(checkEqual(count1,count2)) return true; 

       }
    return false;

    }

int main(){

  string s1 = "ab";
  string s2 = "eidbaooo";
  // we have to check if any permutations of s1 is present in s2

  bool incl = checkInclusion(s1,s2);
  if(incl){
    cout<<"true"<<endl;
  }else cout<<"false"<<endl;
}

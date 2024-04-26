#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

int  compress(vector<char> &chars) {


  int i = 0;
  int ansIndex = 0; // this variable will track the location at which we will insert char and its occurace 

  // iterating while loop in array 
  while(i<chars.size()){
      int j = i+1; 
      
      //checking next element is same or not
    while((j<chars.size()) &&( chars[i] == chars[j])){
        j++;
    }

    // yaha kab aaoge 
    // ya toh vector poora traverse krdiya
    // ya toh fir new/different character encounter kia hai

     // new character store krlo
    chars[ansIndex++]= chars[i];             // insering char at right index 
   
    int count = j-i;  // count of occurance
       
  
    if(count>1){
         // converting counting into single digit an storing in ans  

        string str = to_string(count);         
        for(auto ch : str){                 // when count>1 then convert it into string then insert in array character by character
            chars[ansIndex++] = ch;
        }
    }
     //moving to new/different character 
     i =j;                                 // updating i will move i to next non-same element of Array 

  }
  return ansIndex;  // this will act as the final size of arary after modifying it 



}



        
   

int main(){

   vector<char> chars = {'a','a','b','b','c','c','c'};

    int ans = compress(chars);
    cout<<ans<<endl;
}

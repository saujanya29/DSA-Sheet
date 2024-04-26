#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

int findDuplicate(vector<int> &arr) 
{
   
    /* // Approach 1 : using extra array -- S.C - O(n)
    
    int mp[arr.size()]={0};

    for(int i = 0 ;i<arr.size();i++){
        mp[arr[i]]++;
    }

    for(int i = 0 ;i<arr.size();i++){
          
          if(mp[arr[i]]>1){
              return arr[i];
          }
 
    }
    */
   

    /* Approach 2: sung XOR operations -XOR has property
     1.XOR of Same NUmbers will return to zero(a^a = 0)
     2. XOR of any element with Zero will give same NUmber (a^0=a)
      */

    //Step1 : first XOR of the elements in the array
     int ans = 0;
     for(int i = 0 ;i<arr.size();i++){
         ans = ans^arr[i];
    }
    //Step2 : Now XOR ans with number (1 to n-1(i.e. Size))

    for(int i = 1;i<arr.size();i++){
         ans = ans^i;
    }

	return ans;
}

int main(){

  vector<int> ans = {1,2,3,4,5,5};
   cout<<findDuplicate(ans)<<endl;

}

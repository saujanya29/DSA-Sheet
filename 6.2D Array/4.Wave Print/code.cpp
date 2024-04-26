#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    int row = 0;
    int col = 0;
    vector<int> ans;
    while(col<mCols && row<nRows){
        if(col&1){
            // odd column hai
            for(int row =nRows-1 ; row>=0;row--){
                ans.push_back(arr[row][col]);
            }
            col++;
        }
        else{
            
            for(int row = 0 ; row<nRows;row++){
                 ans.push_back(arr[row][col]);
            }
            col++;
        }
    }
    return ans;
}

int main(){

   vector<vector<int>> arr{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
   vector<int> ans  = wavePrint(arr,3,4);
   for(int i = 0 ; i<ans.size(); i++){
      cout<<ans[i]<<" ";
   }
   
   
   

}

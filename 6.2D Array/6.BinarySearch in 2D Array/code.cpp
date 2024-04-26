#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();

        int size  = row*col;

        int s = 0;
        int e = size -1;
        int mid = s +(e-s)/2;
        while(s<=e){
            int element  = matrix[mid/col][mid%col]; 
            /*
             2d matrix can be presented in linear form and then any element (row,col) is
             row = (index in linear form)/col;
             col = (index in linear form)%col;
             
             index = col*row + col  -- converting to index in linear form from row and col 
            */

            if(element == target){
              return true;
            }
            else if(element<target){
                s=mid+1;
            }else{
                e = mid-1;
            }
            mid = s +(e-s)/2;
           
        }

        return false;
    }


int main(){

  vector<vector<int>> arr{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
  bool prst = searchMatrix(arr,13);
  if(prst) cout<<"true"<<endl;
  else cout<<"false";
    

}

#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

// In this matrix is sorted row and column wise both 
// so cant use binary search directly 

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();

        int rowIndex = 0;
        int colIndex = col-1;
        
        while(rowIndex <row && colIndex>=0){
            int element = matrix[rowIndex][colIndex];
            if(element == target){
                return true;
            }
            else if(element >target){
                //then element will definately in left side
                colIndex --;
            }
            else{
                //then element will definately in down side
                rowIndex++;
            }
        }
          return false;
    }

int main(){

  vector<vector<int>> arr{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
  bool prst = searchMatrix(arr,13);
  if(prst) cout<<"true"<<endl;
  else cout<<"false";
    
    

}

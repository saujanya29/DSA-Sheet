#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;


 vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
         
         int count  = 0;
         int total  = row*col;
         

         int startingRow = 0;
         int startingCol = 0;
         int endingRow = row -1;
         int endingCol = col-1;

 // In every for loop always check <total , if true then only operate -- this is important 
         while(count<total){
             // Print Starting row
             for(int index = startingCol ; count<total && index <=endingCol ;index++){
                 ans.push_back(matrix[startingRow][index]);
                 count++;
             } 
             startingRow++;

            // Print Ending Column
            for(int index = startingRow ; index<=endingRow && count<total ; index++){
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;

            // Print Ending Row
            for(int index = endingCol ; index>=startingCol && count<total ; index--){
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
           endingRow--;

           // Print Starting Column 
           for(int index = endingRow ; index>= startingRow && count<total;index--){
               ans.push_back(matrix[index][startingCol]);
               count++;
           }
           startingCol++;

         }
         return ans;
    }

int main(){
  
   vector<vector<int>> arr{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
   vector<int> ans  = spiralOrder(arr);
   for(int i = 0 ; i<ans.size(); i++){
      cout<<ans[i]<<" ";
   }
    

}

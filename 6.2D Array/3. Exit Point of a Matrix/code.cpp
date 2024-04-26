#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main(){

     int arr[4][4] = {0,0,1,0,1,0,0,0,0,0,0,0,1,0,1,0};

   int row = 0;
  int col = 0;
  int dir = 1;                                       // 1 -> e ,2 -> s, 3 -> w,4 -> n
  int ansR = 0;
  int ansC = 0;
   
  while(col<4 && row <4){
      if(dir == 1){
       ansR = row;
       ansC = col;
       if(arr[row][col] == 0) col++;
       else row++ , dir = 2 ;
      }
     
     if(dir == 2){
       ansR = row;
       ansC = col;
       if(arr[row][col] == 0) row++;
       else col-- , dir = 3 ;
      }
      
      if(dir == 3){
       ansR = row;
       ansC = col;
       if(arr[row][col] == 0) col--;
       else row-- , dir = 4;
      }
      
      if(dir == 4){
       ansR = row;
       ansC = col;
       if(arr[row][col] == 0) row--;
       else col++ , dir = 1;
      }
      
      
  }

cout<<ansR<<endl;
cout<<ansC<<endl;

}

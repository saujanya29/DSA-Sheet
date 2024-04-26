#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;


vector<vector<int>>  Merge( vector<vector<int>> &Intervals){

 vector<vector<int>> MergeIntervals;

// if there are no intervals so just return MergeIntervals
 if(Intervals.size() == 0 ){
    return MergeIntervals;

 }

// sort the intervals 
 sort(Intervals.begin(),Intervals.end());

// create a temp interval pair to compare with intervals and then merge them 


 vector<int> tempIntervals = Intervals[0];  

// important to understand 19th line of code -:

//vector<int> tempIntervals = Intervals[0];
//  cout<<tempIntervals[0]<<endl;          output = 1
//  cout<<tempIntervals[1]<<endl;          output = 3
 

// iterate loop on Intervals 
 for(auto it : Intervals){

    // check starting of interval is less than or eqaul to ending of temporary interval
    // merging can be only done only if this condition is true

    if(it[0]<= tempIntervals[1]){
       // if true then update the ending of temp interval with max of both (merging)
        tempIntervals[1] = max( it[1],tempIntervals[1]);
    }
    else{

        // if false then just put temp interval in ans and make this new non merged interval as new temp interval to compare and merge 
        MergeIntervals.push_back(tempIntervals);
        tempIntervals = it;
    }
 }


// finally merge the last interval and return the final ans 
  MergeIntervals.push_back(tempIntervals);
 
  return MergeIntervals;



}

int main(){

    vector<vector<int>> Intervals = {{1,3},{2,6},{8,10},{8,9},{9,11},{15,18},{2,4},{16,17}};
   vector<vector<int>> Ans = Merge(Intervals);
    
    for(int i = 0; i<Ans.size();i++){
        for(int j = 0 ; j<Ans[i].size();j++){
            cout<< Ans[i][j]<<" ";
        }
        cout<<endl;
    }

}


// 2D vectors 

//important -

//vector<int> tempIntervals = Intervals[0];
//  cout<<tempIntervals[0]<<endl;          output = 1
//  cout<<tempIntervals[1]<<endl;          output = 3


//Alternative 

// #include<bits/stdc++.h>

// using namespace std;
// vector < vector < int >> merge(vector < vector < int >> & intervals) {

//   sort(intervals.begin(), intervals.end());
//   vector < vector < int >> merged;

//   for (int i = 0; i < intervals.size(); i++) {
//     if (merged.empty() || merged.back()[1] < intervals[i][0]) {
//       vector < int > v = {
//         intervals[i][0],
//         intervals[i][1]
//       };

//       merged.push_back(v);
//     } else {
//       merged.back()[1] = max(merged.back()[1], intervals[i][1]);
//     }
//   }

//   return merged;
// }

// int main() {
//   vector < vector < int >> arr;
//   arr = {{1, 3}, {2, 4}, {2, 6}, {8, 9}, {8, 10}, {9, 11}, {15, 18}, {16, 17}};
//   vector < vector < int >> ans = merge(arr);


//   cout << "Merged Overlapping Intervals are " << endl;

//   for (auto it: ans) {
//     cout << it[0] << " " << it[1] << "\n";
//   }
// }


#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<unordered_map>
#include<algorithm>


using namespace std;




// Method 1 - Using a extra array or vector

int RemoveDuplicatesUnsorted(vector<int> &arr ){

    vector<int> marked (arr.size(),0);  // Marking all the array initially with 0

    for(int i = 0 ; i<arr.size(); i++){
        if(marked[i] == 0){   // if the index is 0 in the marked array
            for(int j = i+1 ; j<arr.size(); j++){
                  
                  if(arr[i] == arr[j]){   // iterate a for loop and find its duplicate 
                    marked[j] = 1; // then and mark its index as 1 
                  }
            }
        }
    }
    
    for(int i = 0 ; i<arr.size(); i++){

        if(marked[i] == 0){ // print only those index's element which is marked as 0 is the markede array so unique element will get printed 
            cout<<arr[i]<<" ";
        }    
    }

}






// Method 2- Using Hashtable or Map    '
// T.C. - O(n) + O(n) -> array iteration , search in map
// S.C - O(n) -> hashmap

int RemoveDuplicateUnsorted1(vector<int> arr){

    unordered_map<int,int> mp;    

    for(int i = 0; i<arr.size();i++){
        
        if(mp.find(arr[i]) == mp.end()){  // this shows that element arr[i] is not present in map or occurance is 1
            cout<<arr[i]<<" ";    // so print that element 
            mp[arr[i]]++; // this will increase the occurance so next time same element does not get printed
        }
    }
}







int main(){
  


  vector<int> arr = {4,3,9,2,4,1,10,89,34};
  RemoveDuplicateUnsorted1(arr);
    
    

}

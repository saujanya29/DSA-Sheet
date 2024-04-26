#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

// Method 1- using two for loops      T.C. -> O(m*n)  S.C. -> O(1)     

bool isSubset(int* arr1,int m,int* arr2,int n){

    if(m>n){
        return false;
    }
  
  // INTUITION- isme ham log arr1 ke har element ko search krege arr2 and chk variable ko pehle false mark krke rkhege
  // and search krne pr agr arr2 mein mil jata h toh fir ham chk ko true mark krege and jaise hi koi element arr2 mein present ni hoga 
  // toh chk value false hi rahegi toh hum false return kr dege jisse ye result nikalega ki arr1 is not a subset of arr2 otherwise it is subset of arr2


    for(int i = 0 ; i<m; i++){
         bool chk = false;
         for(int j = 0 ; j<n; i++){
            if(arr1[i]==arr2[j]){
               chk = true;
               break;
            }
         }
         
         if(chk == false){   // Important Line 
            return false;
         }
         
}
}


// Method 2 - Using Sorting and Binary search             T.C. -> O(nlon(n)+mlog(m))  S.C. -> O(1)     

// Intuition -  sort the arr2 and search the element of arr1 in arr2 using binary search if not present then return false else return true

bool bSearch(int elem, int arr[], int n){
    int start=0;
    int end= n-1;
    while(start<=end){
        int mid= (start+end)/2;
        if(arr[mid]==elem)
            return true;
        else if(arr[mid]<elem)
            start = mid+1;
        else end= mid-1;
    }
    return false;
}

bool isSubset1(int arr1[], int m, int arr2[], int n){
    
    sort(arr2,arr2+n); // library function to sort the array
    
    if(m>n) return false;
    for(int i=0; i<m; i++){
        
	    bool present= bSearch(arr1[i],arr2,n);
	    if(present==false) return false;
	}
	return true;
}


// Method 3 - Using Hashing 

bool isSubset2(int arr1[], int m, int arr2[], int n){
   
   if(m>n) return false;
   
   unordered_map<int,bool> map;

   for(int i = 0 ; i<n; i++){
      map[arr2[i]] = true;
   }

   for(int i = 0 ; i<m; i++){
     if(map[arr1[i]] == false ){
        return false;
     }
   }
   return true ;

}

int main(){

    int arr1[]={1,3,4,5,2};
	int arr2[]={2,4,3,1,7,5,15};
	
	int m= sizeof(arr1)/sizeof(arr1[0]);  // this is method to find the size of array
	int n= sizeof(arr2)/sizeof(arr2[0]);
	
	bool ans= isSubset2(arr1,m,arr2,n);
	
	if(ans==true)
	    cout<<"arr1[] is a subset of arr2[]";
	else cout<<"arr1[] is not a subset of arr2[]";
	
	return 0;

}

#include <iostream> 
#include<climits>
using namespace std;


  int findSum(int A[], int N)
    {
    	//code here.
    	int minEle = INT_MAX;
    	int maxEle = INT_MIN;
    	for (int i = 0; i<N ; i++){
    	    minEle = min (minEle,A[i]);
    	}
    	
    	for (int i = 0; i<N ; i++){
    	    maxEle = max (maxEle,A[i]);
    	}
    	
    	return (maxEle + minEle);
    	}



int main() {
 
int arr[5] = {-2,1,5,6,-4};
int ans = findSum(arr,5);
cout<<ans<<endl;





for(int i = 0; i<5;i++){
    cout<<arr[i]<<" ";
}
 cout<<endl<<"hello World"<<endl;
    
}
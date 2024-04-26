#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

long long int floorSqrt(int n)
{
    // Write your code here.
    int s= 1;
    int e = n;
    long long int mid = s+(e-s)/2;
    long long int ans = -1;
    
    while(s<=e){
           long long int square = mid*mid;
          if(square == n){
              return mid ;
          }
          else if(square < n){
              ans = mid; // here this is may be possible solution if n is not prefect square of any number 
              s = mid+1;
          }else{
              e = mid-1;
          }
          mid = s+ (e-s)/2;
    }
    // if perfect sqaure root exist then it would have returned in ln:21
    // else we will return the smaller number of which its root exist 
    // like if n =27 then its sqrt lies between 5 to 6 so we will return 5 
    return ans;
}


// Function to get more precision
double morePrecision(int n,int precision,int tempval){
     double factor = 1;
     double ans = tempval;
     // first loop for digits of precision
     for(int i = 0 ; i<precision ;i++){
       // factor is added to tempval and then checked that its square is less than n or not  
        factor = factor/10; // 0.1 -> 0.01-> 0.001 
       
       // this loop wil update ans by checking that its sqaure after adding factor is  < n or not 
       // if yes then update ans with j (i.e. j+factor )
        for(double j =ans; j*j <n ; j = j+factor ){
            ans = j;
        }
     }
     return ans;
}

int main(){

    int n;
    cin>>n;

   int tempval =  floorSqrt(n);



   // to find more precision in the value of sqrt 

 cout<< morePrecision(n,3,tempval);
 

}

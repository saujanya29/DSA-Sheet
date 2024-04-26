#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<cstdlib>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;


int main(){

    /* Dynamic memory allocation using malloc Function  */ 

    int n =5;
    int * ptr = (int *) malloc(n* sizeof(int));

  // Printing before allocating value --> retruning random value
   for(int i = 0 ; i<5; i++){
      cout<<*(ptr+i)<<" ";
   }
   cout<<endl;

   // Value Allocation

   for(int i = 0 ; i<n; i++){
        ptr[i] = i*2;
   }

  //printing After allcoation
   for(int i = 0 ; i<n; i++){
   /* ptr[i] and *(ptr+i) can be used interchangibly */
      cout<<*(ptr+i)<<" ";
   }

   cout<<endl;
   
   free(ptr);
  



   /* Dynamic Memory allocation usind calloc function*/
   
   int *ptr1 = (int*) calloc(5,sizeof(int));

  // calloc function sets all element to 0
   for(int i = 0 ; i<5; i++){
      cout<<*(ptr1+i)<<" ";
   }
   cout<<endl;




/* syntax for dynamic allocation using new word */

 int * ptr2 = new int(5);
 int *ptr3 = new int ;

 /*memory stored in heap needs to be deleted manually*/

 delete [] ptr2;
 delete ptr3;


}







#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

void update(int **p2){

   // p2 = p2+1;
   // kuch change hoga -NO  (there will be no change in values of i, p and p2 ) -> (i,p,p2) == (5,710,820)

   *p2 = *p2 + 1;
 // kuch change hoga - YES (there will be  change in value of p out of i, p and p2 ) -> (i,p,p2) == (5,714,820)

 **p2 = **p2 + 1;
  // kuch change hoga - YES (there will be  change in value of i out of i, p and p2 )-> (i,p,p2) == (6,710,820)

}

int main(){

    /*
    
    int arr [10] ;
    // name of array will store the address of first memory block
    cout<<"Address of first memory block is "<<arr<<endl;

    // Double Pointers
   int i =5;
   int *p = &i;
   int **p2 = &p;

 cout<< endl << endl <<" Sab sahi chal rha h " << endl << endl ;

 // these below three lines are ways to output i i.e. value is 5 ;
 
 cout<<i<<endl;
 cout<<*p<<endl;
 cout<<**p2<<endl;

  // these below three lines are ways to get address of i 

  cout<<&i<<endl;
  cout<<p<<endl;
  cout<<*p2<<endl;

  // these below two lines are ways to get address of p
  cout<<&p<<endl;
  cout<<p2<<endl;


cout << endl << endl;
    cout<< "before " << i << endl;
    cout<< "before " << p << endl;
    cout<< "before " << p2 << endl;
    update(p2);
    cout<< "after " << i << endl;
    cout<< "after " << p << endl;
    cout<< "after " << p2 << endl;
    cout << endl << endl;


*/


   
}

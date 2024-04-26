#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Hero{
  public:  // if this is public can be accessed everywhere 
   int health ;
   char level;
   
  int getHealth(){ // these functions can access the private members of the class
    return health;
  }
  
  char getLevel(){
    return level;
  }

  void setHealth(int h){
    health = h;
  }
  
  void setLevel(char ch){
    level = ch; 
  }

};


int main(){

  
  /*
 
    // Creation Of Objects -> Static Allocation
    Hero ramesh;
     
    cout<<"Size of Ramesh is "<<sizeof(ramesh)<<endl; // Size of ramesh is 8bytes(Learn Padding & Greedy Allignments) 
    cout<<"ramesh health" << ramesh.health<<endl; // health of ramesh or if not initialized then a Garbage value
    cout<<"ramesh level" << ramesh.level<<endl;  // level of ramesh
   // using Setter and getter function -> created inside class 

   // setting health and level using setter function

   ramesh.setHealth(70);   // health = 70
   ramesh.setLevel('A');   // level = 'A'
  
  // getting output of health and level using getter function

  cout<<"Ramesh Health using getter func"<<ramesh.getHealth()<<endl;  // 70
  cout<<"Ramesh Level using getter func"<<ramesh.getLevel()<<endl;   //'A'

   */

  /* 
  static and Dynamic allocation
  */
  
  // static allocation 
  Hero a;
  a.setHealth(80);
  a.setLevel('B');
  cout<<"Level is "<< a.level<<endl; //B
  cout<<"health is "<<a.health<<endl; //80

  // Dynamic Allocation 
  Hero *b = new Hero; 
  b->setHealth(70);   // b->setHealth == (*b).setHealth
  b->setLevel('A');   

 // Two different methods of setting and getting values in dynamic allocation
 // -> *b because it will derefernce to value of health
 // -> only b will have the address of memory allocated to pointer
cout<<"Level is "<< (*b).level<<endl;        //A   
cout<<"Level is "<< (*b).getHealth()<<endl; //70

cout<<"Level is "<< b->level<<endl;        //A
cout<<"Level is "<< b->getHealth()<<endl; //70

}

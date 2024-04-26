#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include <cstring>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Hero{

public:
       char *name;
       int health; 
       char level;


       // simple constructor - there is default constructor alreadybut 
       //when we create manually that one get deleted automatically 

       Hero(){
        cout<<"Simple Constructor Called"<<endl;
        name = new char[100];
       }
      
      // Paramaterised character 
      Hero(int health,char level){
      // 'this' keyword is a pointer which is pointing to hero object and storing its addresss
       
        this->health = health ;  
        this->level = level;
      } 

       // Copy Constructor - 
       //there is also a default copy constructor but when we create manually that one 
       //get deleted automatically 

       Hero(Hero& temp){ // & is used to pass by reference otherwise it will stuck in infinte loop of copy constructor
         

         // deep copy 
         char *ch = new char[strlen(temp.name)+1];
         strcpy(ch,temp.name);
         this->name = ch;
       
       
        this -> health = temp.health; // temp is not pointer so (.operator is used)
        this -> level = temp.level;  // this keyword is pointer so (-> operator is used )
      
       }

       void print(){

        cout << endl;
        cout << "[ Name: " << this->name<< " ,";
        cout << "health: " << this->health << " ,";
        cout <<"level: " << this->level << " ]";
        cout << endl << endl;
       }

       void setName(char ch[]){

          strcpy(this ->name, ch);

       }

      //Destructor
    ~Hero() {   
        cout << "Destructor bhai called" << endl;
    }


};

int main(){

    /*
    
    Hero S(70,'C'); // Assingnign value uaing parmaterised constructor
    S.print();
    Hero R(S);  // copy constructor  
    R.print();

    */

   /*
   when we use default copy constructor the values get shallow copy
   means that same memory is allocated to copied parameters(bit confusing)
   */


    Hero hero1(12,'D');
    hero1.print();    
    char name[7] = "Babbar";
    hero1.setName(name);
    hero1.print();  //   [ Name: Babbar ,health: 12 ,level: D ]



    /*
     
   use default copy constructor 

   Hero hero2(hero1);
   hero2.print();             // [ Name: Babbar ,health: 12 ,level: D ] 

// another way to copy
   //Hero hero2 = hero1;  

// changing the name
   hero1.name[0] = 'G';  
   hero1.print();              //  [ Name: Gabbar ,health: 12 ,level: D ]

   hero2.print();             //   [ Name: Gabbar ,health: 12 ,level: D ]

    */


     /* 
     (changed name of hero1 but hero2 also changed means it was shaloow copy)
     */



    /*
    creating copy constructor with deep copy(now only hero1 will be changed)

    Hero hero2(hero1); 
    hero1.name[0] = 'G';  
    hero1.print();        //  [ Name: Gabbar ,health: 12 ,level: D ]

    hero2.print();       //   [ Name: Babbar ,health: 12 ,level: D ]

    */

    // Assignment operator
    Hero hero2(70,'C');
    hero1 = hero2;
    hero1.print();   // 70 'C'
    hero1.print();   // 70 'C'
 

}

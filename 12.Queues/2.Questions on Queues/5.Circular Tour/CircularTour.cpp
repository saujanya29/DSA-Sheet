#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};

 //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
       int balance = 0;
       int deficit = 0;
       int start = 0;
       
       for(int i = 0 ;i<n;i++){
           balance += p[i].petrol -p[i].distance;
           
           // if balance <0 then this cant be start point and will check for next index as start 
           
           if(balance <0){
               start = i+1;
               deficit += balance;
               balance = 0;
           }
           
       }
        // //Note- Here we will traverse till end or array and then at last check deficit and balance is >1 
        // check out your notes for better understanding

       /* ab jis index pe apna start hoga and end pe pahuch gye hoge traverse krte krte and 
         apan deficit bhi store krte aayege jo index starting point ni bn paye the and loop 
         end hone ke baad check krege ki kya wo deficit (ya kam that petrol) wo recover ho 
         payega if yes then no need to check it again just return your ans*/

       if(balance + deficit >= 0){
           return start;
       }
       else return -1; 
       
    }

int main(){

    

}

#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;


class student {


    private :
    string name;
    int age;
    int height;
    
    public:
    int getAge(){
        return this->age;
    }


};

int main(){
 
 student first;
 cout<<first.getAge()<<endl;



    

}

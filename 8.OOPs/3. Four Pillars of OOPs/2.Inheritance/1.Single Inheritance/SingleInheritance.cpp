#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

// Single Inheritance 

class Animal{

    public:
    int age;
    int weight;

    public:
    void Speak(){
        cout<<"Speaking"<<endl;
    }

};

class Dog : public Animal {

};

int main(){


Dog d;
d.Speak();
cout<<d.age<<endl;


    

}

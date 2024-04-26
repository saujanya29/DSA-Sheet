#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<stack>
#include<algorithm>
using namespace std;

class Stack {
  
  public: 
  int* arr;
  int top;
  int size;

  Stack(int size){
    this -> size = size;
    arr = new int[size];
    top = -1;

  }

  void push(int val){
      if(size-top>1){
        top++;
        arr[top] = val;
      }
      else{
        cout<<"Stack Overflow"<<endl;
      }
  }

  void pop(){
    if(top != -1){
        top--;
    }
    else{
        cout<<"Stack Underflow"<<endl;
    }
  }

  int peek(){
     if(top>=0 && top<size){
         return arr[top];
     }else{
        cout<<"Stack is empty"<<endl;
        return -1;
     }
  }

  bool IsEmpty(){
    if(top<0){
        return true;
    }else{
        return false;
    }
  }



};





int main(){

Stack st(5);
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
//st.push(6);

cout<<st.size<<endl;

cout<<st.peek()<<endl;

st.pop();

cout<<st.peek()<<endl;

while(!st.IsEmpty()){
    cout<<st.peek()<<" ";
    st.pop();
}








}

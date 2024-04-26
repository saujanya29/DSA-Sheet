#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

class TwoStack{

   public:

   int * arr ;
   int top1 ;
   int top2;
   int size;
  

  // constructor 
  TwoStack(int size){
    arr = new int[size];
    top1 = -1;
    top2 = size;
    this->size =size;

  }
  // Push in Stack 1

  void push1(int val){
    if(top2-top1 > 1){
        top1++;
        arr[top1] =val;
    }

  }
 
 // Push in Stack 2

 void push2(int val){
    if(top2 -top1 >1){
        top2--;
        arr[top2] = val;
    }
 }

 // Pop from Stack 1 and return popped element

 int pop1(){
     
     if(top1>=0){
        int ans = arr[top1];
        top1--;
        return ans;
     }
     else{
        return -1;
     }

 }

 int pop2(){
    if(top2<size){
      int ans = arr[top2];
      top2++;
      return ans;
    }
    else{
        return -1;
    }
 }

bool IsEmpty(){
    if(top1 <0 && top2 >=size){
        return true;
    }
    else{
        return false;
    }
}

int peek(){
     if(top1 >= 0){
        return arr[top1];
        
     }else{
        return arr[top2];

     }


}
};

int main(){
 
TwoStack st(5);

st.push1(1);
st.push1(2);
st.push2(3);
st.push2(4);
st.push2(5);

cout<<st.peek()<<endl;
st.pop1();
cout<<st.peek()<<endl;
st.pop1();
cout<<st.peek()<<endl;
st.pop1();
cout<<st.peek()<<endl;
st.pop1();



}

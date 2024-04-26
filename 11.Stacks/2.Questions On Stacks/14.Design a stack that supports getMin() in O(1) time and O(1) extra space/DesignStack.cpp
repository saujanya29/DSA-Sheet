#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<stack>
#include<unordered_map>
#include<algorithm>
using namespace std;


class SpecialStack {
    // Define the data members.
	stack<int> s;
    int mini = INT_MAX;
    /*----------------- Public Functions of SpecialStack -----------------*/
    public:
        
    void push(int data) {
        //for first element
        if(s.empty()) {
            s.push(data);
            mini = data;
        }
        else
        {
         	if(data < mini) {
                s.push(2*data - mini);
                mini = data;
            }   
            else
            {
                s.push(data);
            }
        }
    }

    int pop() {
        if(s.empty()){
            return -1;
        }
        
        int curr = s.top();
        s.pop();
        if(curr > mini) {
            return curr;
        }
        else
        {
            int prevMin = mini;
            int val = 2*mini - curr;
            mini = val;
            return prevMin;
        }
    }

    int top() {
        if(s.empty())
            return -1;
        
        int curr = s.top();
        if(curr < mini) {
            return mini;
        }
        else
        {
            return curr;
        }
    }

    bool isEmpty() {
        return s.empty();
    }

    int getMin() {
        if(s.empty())
            return -1;
        
        return mini;
    }  
};




int main(){

    SpecialStack st;
   
    st.push(5);
    st.push(6);
    st.push(4);
    st.push(8);
    st.push(2);
    st.push(1);
    
   
   
   cout<<"top element :"<<st.top()<<endl;
   cout<<"min element :"<<st.getMin()<<endl;

   cout<< "popped element:"<<st.pop() <<endl;;
   cout<<"top element :"<<st.top()<<endl;
   cout<<"min element :"<<st.getMin()<<endl;
   
   
   cout<< "popped element:"<<st.pop() <<endl;;
   cout<<"top element :"<<st.top()<<endl;
   cout<<"min element :"<<st.getMin()<<endl;


cout<< "popped element:"<<st.pop() <<endl;;
   cout<<"top element :"<<st.top()<<endl;
   cout<<"min element :"<<st.getMin()<<endl;




}



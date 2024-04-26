#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<set>
#include<stack>
#include<unordered_map>
#include<algorithm>
using namespace std;

// Fuction to sortedly insert the num

void SortedlyInsert(stack<int> &stack , int x){

    // base case 
	if(stack.empty()){
		stack.push(x);
		return;
	}
    
	// preRecursion
	int peek = stack.top();
	if( x < peek){
		stack.pop();
		// Recursive Call
		SortedlyInsert(stack,x);
		// Post Recursion 
		stack.push(peek);
	}
	else{
		stack.push(x);
	}

}

// Quality code to insert num sortedly -- both are doing same 
// difference is that in 2nd method if condition is managed in base case itself

void SortedlyInsert(stack<int> &stack , int x){

    // base case 
	// (if stack is empty ) or (top of stack is less than x)
	if(stack.empty() || (!stack.empty() && stack.top()<x)){
		stack.push(x);
		return;
	}
    
	// preRecursion
	int peek = stack.top();
	stack.pop();

	// Recursive Call
	SortedlyInsert(stack,x);
	// Post Recursion 
	stack.push(peek);
	
	

}


void sortStack(stack<int> &stack)
{
	// Write your code here
	if(stack.empty()){
		return;
	}

	// Pre Recursion
	int Top = stack.top();
	stack.pop();

	// Recursive Call
	sortStack(stack);

	// Post Recursion
	SortedlyInsert(stack,Top);

}

int main(){

    

}

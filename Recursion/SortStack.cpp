#include <bits/stdc++.h>
using namespace std;

void sortedInsert(stack <int> &s, int element){

	// checking if the stack is empty
	// or element is greater than s.top()
	// If any of the condition is true, then insert the
	// element at the top
	if(s.empty() || element>s.top()){
		s.push(element);
	}

	// if condition fails, then 
	// delete the top element from the stack and
	// again call the sortedInsert function
	// and then push the top element of the stack
	else{
		int top_element = s.top();
		s.pop();
		sortedInsert(s,element);
		s.push(top_element);
	}

}

void sortStack(stack <int> &s){

	// check if stack is empty
	// if not empty, then store and pop the
	// top element of the stack
	if(!s.empty()){
		int top_element = s.top();
		s.pop();
		sortStack(s);
		sortedInsert(s,top_element);
	}
}

void print(stack <int> s){

	while(!s.empty()){
		int top = s.top();
		s.pop();
		cout<<top<<endl;
	}
}
int main(){
	stack <int> s;
	// pushing the elements 
	s.push(30);
	s.push(-5);
	s.push(18);
	s.push(14);
	s.push(-3);

	sortStack(s);

	print(s);
}


// Tc = O(N^2)
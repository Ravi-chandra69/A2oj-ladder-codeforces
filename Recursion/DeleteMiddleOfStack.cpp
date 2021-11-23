//Delete the middle element of the stack using recursionn

#include <bits/stdc++.h>
using namespace std;

void deleteMiddle(stack <int> &st,int k){

	if(k==1){
		st.pop();
		return;
	}
	else{
		int top_element = st.top();
		st.pop();
		k--;
		deleteMiddle(st,k);
		st.push(top_element);
	}
}

void print(stack <int> st){

	while(!st.empty()){
		int top = st.top();
		st.pop();
		cout<<top<<endl;
	}
}
int main(){

	stack <int> st;

	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	st.push(6);

	int size = st.size();
	int k = (size/2) +1;
	// print(st);
	// cout<<endl;
	deleteMiddle(st,k);
	print(st);
}
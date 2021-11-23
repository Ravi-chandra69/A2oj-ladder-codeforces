#include <bits/stdc++.h>
using namespace std;


void insert(stack <int> &st,int element){

	if(st.empty()){
		st.push(element);
	}
	else{
		int top_element = st.top();
		st.pop();
		insert(st,element);
		st.push(top_element);
	}
}
void reverse(stack <int> &st){

	if(st.size()==1){
		return;
	}
	else{
		int top_element = st.top();
		st.pop();
		reverse(st);
		insert(st,top_element);
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

	cout<<"Original stack : "<<endl;
	print(st);
	cout<<endl;
	cout<<"Stack palat jaane k baad : "<<endl;
	reverse(st);
	print(st);

}
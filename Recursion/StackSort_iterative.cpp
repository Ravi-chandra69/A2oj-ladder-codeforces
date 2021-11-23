#include <bits/stdc++.h>
using namespace std;

void print(stack<int> s){

	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
}

int main(){

	stack <int> s;

	s.push(13);
	s.push(23);
	for (int i = 0; i < s.size(); ++i)
	{
		int temp = s.top();
		s.pop();
		int temp1 = s.top();
		
		if(temp1<temp){
			s.pop();
			s.push(temp);
			s.push(temp1);

		}

	}
	print(s);

}
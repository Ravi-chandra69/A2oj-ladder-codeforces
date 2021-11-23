// Linear search program
// Author : Shubham Verma
// System id : 2019005093
// CSE C 5th SEM, G2


#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int x;
	bool flag = false;
	cout<<"Enter the size of the array : "<<endl;
	cin>>n;
	vector <int> v(n);

	cout<<"Enter the values of the array : "<<endl; 
	for(auto &x:v)
		cin>>x;

	cout<<"Enter the number you want to search in the array : "<<endl;
	cin>>x;

	for (int i = 0; i < n; ++i)
	{
		if(v[i]==x){
			cout<<"Element found at index : "<<i<<endl;
			flag = true;
			break;
		}
	}
	if(!flag)
		cout<<"Element not found"<<endl;
}
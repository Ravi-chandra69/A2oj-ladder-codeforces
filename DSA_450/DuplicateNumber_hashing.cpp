#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	int hash[n];
	memset(hash,0,sizeof(hash));
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<hash[i]<<" ";
	}
	cout<<endl;
	for (int i = 0; i <n; ++i)
	{
		hash[a[i]]++;
	
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<hash[i]<<" ";
	}
	for (int i = 0; i < n; ++i)
		{
			if(hash[i]>1)
				cout<<"Duplicate : "<<i;
		}	
}

// Tc = O(n)
// Sc= O(n)
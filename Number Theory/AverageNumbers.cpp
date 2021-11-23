#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int sum = 0;
	int n;
	cin>>n;
	vector <int> v;
	int b[n] = {0};

	for (int i = 0; i <n; ++i)
	{
		int x;cin>>x;
		v.push_back(x);
		sum += v[i];
	}
	// for (int i = 1; i <=n; ++i)
	// {
	// 	cout<<a[i];
	// }
	int ct =0;
	// int sum = accumulate(v.begin(),v.end(),0);
	// cout<<sum;
	for (int i = 1; i <=n; ++i)
	{
		// int avg= (sum - v[i])/(n-1);
		// cout<<avg<<endl;
		if(v[i] == (sum - v[i])/(n-1)){
			ct++;
			b[ct] = i;
		}
		

	}
	cout<<ct<<endl;
	for (int i = 0; i < ct; ++i)
	{
		cout<<b[i]+1<<" ";
	}
}
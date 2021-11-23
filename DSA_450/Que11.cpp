// Minimum number of jumps

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,ct;
	cin>>n;
	int a[n];
	ct =0;
	int j=0;
	for (int i = 0; i < n; ++i)
		cin>>a[i];
	int index;
 
	while(j<n){
		j = a[j];
		cout<<j<<endl;
		ct++;
	}

	cout<<ct;

}
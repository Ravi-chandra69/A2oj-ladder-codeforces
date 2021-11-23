#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int ct=0;
		int n;
		cin>>n;
	while(n!=0){
		n=n&(n-1);
		ct++;
	}
	cout<<ct<<endl;
	}
	

}
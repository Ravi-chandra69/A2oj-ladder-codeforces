#include <bits/stdc++.h>
using namespace std;

int main(){
	unsigned n;
	cin>>n;
	int ct=0;
	while(n!=0){
		n=n&(n-1);
		ct++;
	}
	cout<<ct;

}
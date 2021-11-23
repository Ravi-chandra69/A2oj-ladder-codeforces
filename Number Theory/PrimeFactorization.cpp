#include <bits/stdc++.h>
using namespace std;

void primeFactors(int n){
	for (int i = 2; i <=n; ++i)
	{
		if(n%i==0){
			int ct=0;
			while(n%i==0){
				ct++;
				n=n/i;
				
			}
			cout<<i<<"^"<<ct<<endl;
		}
	}
}




int main(){
	int n;
	cin>>n;
	primeFactors(n);
}
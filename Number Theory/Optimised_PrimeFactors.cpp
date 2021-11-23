#include <bits/stdc++.h>
using namespace std;

void primeFactors(int n){
	if(n<=1)
		return;
	else{
		for (int i = 2; i *i<=n; ++i)
		{
			if(n%i==0){
				int ct=0;
				while(n%i==0){
					ct++;
					n/=i;
				}
				cout<<i<<"^"<<ct<<endl;
				// cout<<n<<endl;
			}
			
		}
		if(n>1)
			cout<<n<<"^"<<1<<endl;
		
	}
}

int main(){
	int n;
	cin>>n;
	cout<<"Prime factors of : "<<n<<endl;
	primeFactors(n);
}
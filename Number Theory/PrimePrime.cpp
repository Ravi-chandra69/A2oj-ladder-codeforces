#include <bits/stdc++.h>
using namespace std;


bool isPrime(int n){
	if(n==1)
		return false;
	else{
		for (int i = 2; i*i< n; ++i)
		{
			if(n%i==0)
				return false;
		}
		return true;
	}
}

int solve(int l, int r){
	
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int l,r;
		cin>>l>r;
		solv(l,r)
	}
}
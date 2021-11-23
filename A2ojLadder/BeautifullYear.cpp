#include <bits/stdc++.h>
using namespace std;


int main(){
	int n;cin>>n;
	int a,b,c,d;

	while(true){
		n++;
		a = n%10;
		b=(n/10)%10;
		c = (n/100)%10;
		d = (n/1000)%10;

		if(a!=b and a!=c and a!=d and b!=c and b!=d and c!=d){
			cout<<n;
			break;
		}
	}

	
}


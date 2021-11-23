#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int k;cin>>k;
		int a =k;
		int b = 100-a;
		int gc =__gcd(a,b);
		a/=gc;
		b/=gc;
		cout<<a+b<<endl;
	}
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int M = 1e9+7;

ll power(ll a,ll b){
	ll ans =1;
	while(b>0){
		if(b%2){
			ans = (ans*a)%M;
		}
		a = (a*a)%M;
		b>>=1;
	}
	return ans;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int x = power(2,n);
		x=x-1;
		int temp = power(x,k);
		cout<<temp<<endl;


	}
}
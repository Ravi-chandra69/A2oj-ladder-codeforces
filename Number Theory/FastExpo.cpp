#include <bits/stdc++.h>
using namespace std;
const int M =1e9+7;
#define ll long long



ll power(ll base,ll a){
	ll ans = 1;
	while(a>0){
		if(a%2)
			ans = (ans * base)%M;

		base= (base*base)%M;

		a>>=1;

	}
	return ans;

}

int main(){
	int t;
	cin>>t;
	while(t--){
		ll base,n;
	cin>>base>>n;

	cout<<power(base,n)<<endl;
	}
	
}
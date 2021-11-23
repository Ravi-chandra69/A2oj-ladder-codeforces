#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1e9+7;


ll power(ll a, ll b){
	ll ans=1;
	while(b>0){
		if(b%2){
			ans = (ans * a)%M;
		}
		a = (a * a)%M;
		b>>=1;

	}
	return ans;
}

int main(){
	int t;
	cin>>t;
	cout<<t<<endl;
	while(t--){
	int n, k;
	cin>>n>>k;
	cout<<"N : "<<n<<endl;
	cout<<"K : "<<k<<endl;

	cout<<power(n,k)<<endl;
	}
	
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll sieve(ll l,ll r,vector <ll> v){
	bool isPrime[r+1];
	memset(isPrime,false, sizeof(isPrime));
	ll ct=0;

	for(ll i =l; i <=r; )
	{
		for (ll j = 0; j<v.size(); ++j)
		{
			if(i%v[j]==0 && isPrime[i]==false){
				isPrime[i]=true;
				ct++;
			}

		}
		}
	return ct;
	
}


int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,l,r;
		cin>>n>>l>>r;
		vector <ll> v;
		for(ll i = 0; i <n; ++i)
		{
			ll x;
			cin>>x;
			v.push_back(x);
		}
		cout<<sieve(l,r,v)<<endl;

	}

}
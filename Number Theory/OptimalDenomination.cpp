#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t;cin>>t;
	while(t--){
		ll n,sum=0;cin>>n;
		vector <ll> arr(n);

		for(auto &x:arr){
			cin>>x;sum+=x;
		}
		if(n==1){
			cout<<"1\n";
			continue;
		}
		vector <ll> prefix(n),suffix(n);

		prefix[0] = arr=[0];

		for (ll i = 1; i < n; ++i)
		{
			prefix[i] = __gcd(prefix[i-1], arr[i]);
		}

		suffix[n-1] = arr[n-1];
		for (ll i = n-2; i>=0; --i)
		{
			suffix[i] = __gcd(suffix[i+1],arr[i]);

		}

		ll ans = sum/prefix[n-1];
		for (ll i = 0; i < n; ++i)
		{
			
		}
}

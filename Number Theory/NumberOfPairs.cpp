#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,l,r;
		ll count=0;
		cin>>n>>l>>r;
		vector <ll> v;
		for (ll i = 0; i <n; ++i)
		{
			ll x;
			cin>>x;
			v.push_back(x);
		}

		int low = 0;
		int high= v.size() -1;

		while(low<=high){

		}
		cout<<count<<endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;cin>>t;
	
	while(t--){
		bool flag = false;
		ll n;cin>>n;
		ll sum=0;
		ll a[n];
		for (ll i = 1; i <=n; ++i){
			cin>>a[i];
		}
		for (int i = 1; i <=n; ++i)
		{
			sum+=a[i];
			ll need = i*(i-1)/2;
			if(sum<need){
				flag = true;
				break;
			}
		}
		if(flag)
			cout<<"No\n";
		else
			cout<<"Yes\n";
			

		}
		}

		


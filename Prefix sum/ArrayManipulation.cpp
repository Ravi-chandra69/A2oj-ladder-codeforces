#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll N = 1e7+10;
ll arr[N];
int main(){
	ll n,m;
	cin>>n>>m;
	while(m--){
		ll a,b,d;
		cin>>a>>b>>d;

		arr[a]+=d;
		arr[b+1]-=d;
	}

	for (int i = 1; i <=n; ++i)
	{
		arr[i]+=arr[i-1];

	}
	int max =-1;
	for (int i = 1; i <=n; ++i)
	{
		if(arr[i]>max)
			max = arr[i];
	}
	cout<<max<<'\n';
}
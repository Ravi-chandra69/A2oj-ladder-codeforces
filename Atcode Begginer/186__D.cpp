#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n;cin>>n;
	ll arr[n+1];
	ll sum =0;
	ll pre[n+1];
	ll ans =0;
	for (int i = 1; i <=n; ++i)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	pre[1] = sum;
	// cout<<sum<<endl;

	for (int i = 2; i <=n; ++i)
	{
		pre[i] = pre[i-1]-arr[i-1];

	}
	// for (int i = 1; i <=n; ++i)
	// {
	// 	cout<<pre[i]<<" ";
	// }
	// int i =n;
	for (int i = 1; i <n; ++i)
	{
		ll temp = (n-i)*arr[i];
		ans= ans + abs(temp-pre[i+1]);
		cout<<ans<<endl;
	}
	cout<<ans;

}
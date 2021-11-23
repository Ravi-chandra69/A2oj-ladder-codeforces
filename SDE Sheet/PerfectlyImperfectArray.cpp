#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	vector <int> v(n);
	for(int i=0;i<n;i++) 
		cin>>v[i];
	for (int i = 0; i < n; ++i)
	{
		int  x = sqrt(v[i]);
		if(x*x == v[i]) continue;
		else{
			cout<<"YES"<<endl;
			return;
		}
	}
	cout<<"NO"<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	ll n,a,b;
	cin>>n>>a>>b;
		if(a==1){
			if((n-1)%b==0){
				cout<<"Yes\n";

			}
			else{
				cout<<"No\n";
				
			}
			return;
		}
		else{
			ll num =1;
			while(num<=n){
				if((n-num)%b==0){
					cout<<"Yes\n";
					return;
				}
				
				num*=a;
			}
			cout<<"No\n";
		}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;cin>>t;
	while(t--){
		solve();
		}
		
	}
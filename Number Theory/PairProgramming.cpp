#include <bits/stdc++.h>
using namespace std;

void solve(){
	int ini,n,m;
	cin>>ini>>n>>m;
	int a[n];
	int b[m];
	bool poss = true;
	vector <int> ans;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int j = 0; j < m; ++j)
	{
		cin>>b[j];
	}
	int i=0;
	int j=0;
	while(i<n and j<m){
		if(a[i]==0){
			ans.push_back(0);
			ini++;
			i++;
		}
		else if(b[j]==0){
			ans.push_back(0);
			ini++;
			j++;
		}
		else{
			if(a[i]<b[j]){
				if(ini>=a[i]){
					ans.push_back(a[i]);
					i++;
				}
				else{
					poss=false;
					break;
				}
			}
			else{
				if(ini>=b[j]){
					ans.push_back(b[j]);
					j++;

				}
				else{
					poss=false;
					break;
				}
			}
			}

			
		}
		while(i<n){
			if(a[i]==0){
				ans.push_back(0);
				i++;
				ini++;
			}
			else{
				if(ini>=a[i]){
					ans.push_back(a[i]);
					i++;
				}
				else{
					poss = false;
					break;
				}
			}
		}
		while(j<m){
			if(b[j]==0){
				ans.push_back(b[j]);
				j++;
				ini++;
			}
			else{
				if(ini>=b[j]){
					ans.push_back(b[j]);
					j++;
				}
				else{
					poss = false;
					break;
				}
			}
		}

		if(poss){
			for(auto x:ans) cout<<x<<" ";
		}else{
			cout<<-1;
		}
		cout<<endl;
	}


int main(){
	int t;cin>>t;
	// cout<<t;

	while(t--){
		solve();

	}
}
#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int hsh[N][26];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
	// cout<<t<<endl;
	while(t--){

		for (int i = 0; i <N; ++i)
		{
			for (int j= 0;j < 26; ++j)
			{
				hsh[i][j] = 0;
			}
		}
		int n,q;
		cin>>n>>q;
		string s;
		cin>>s;
		for (int i = 0; i < n; ++i)
		{
			hsh[i+1][s[i]-'a']++;
		}

		for (int i = 0; i < 26; ++i)
		{
			for (int j = 1; j <=n; ++j)
			{
				 hsh[j][i] += hsh[j-1][i];
			}
		// cout<<"prefix calculated :\n";
		}
		while(q--){
			int l,r;
			cin>>l>>r;
			int oddCt = 0;
			// cout<<"Input taken\n";
			for (int i = 0; i <26; ++i)
			{
				int charCt = hsh[r][i] - hsh[l-1][i];

				if(charCt%2!=0){
					// cout<<"incremented\n";
					oddCt++;
				}
			}
			if(oddCt>1)
				cout<<"No\n";
			else
				cout<<"Yes\n";
		}
	}	
}
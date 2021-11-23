#include <bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int ans =0;

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; i < m; ++j)
			{
				char x;
				cin>>x;
				if(x=="1")
					ans++;
			}
		}

		if(ans%2)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}

}
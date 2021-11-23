#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n,m;
	cin>>n>>m;
	int a[n][m];
	int ans[n][m];

	bool flag = true;

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin>>a[i][j];
		}
	}

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			ans[i][j] = 1;
		}
	}
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(a[i][j] = 0){
				ans[i][j] =0;
				ans[i+1][j] = 0;

			}
		}
	}
	
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(a[i][j] != ans[i][j]){
				cout<<"No\n";
				flag = false;
				break;

			}
		}
		if(!flag)break;
	}

	if(flag){
		cout<<"Yes\n";
		for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout<<ans[i][j];
		}
		cout<<endl;
	}


	}




	// for (int i = 0; i < m; ++i)
	// {
	// 	for (int j = 0; j < n; ++j)
	// 	{
	// 		cout<<a[i][j];
	// 	}
	// 	cout<<endl;
	// }
}
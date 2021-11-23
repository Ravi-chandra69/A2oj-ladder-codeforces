#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,m;cin>>n>>m;

	int arr[n][m];

	//1-W
	//0-R
	//-1 --> '.'

	for (int i = 0; i <n; ++i)
	{
		string s;
		cin>>s;
		for (int j = 0; j < m; ++j)
		{
			if(s[j] == '.')
				arr[i][j] = -1;
			else if(s[j] == 'R')
				arr[i][j] = 0;
			else
				arr[i][j] = 1;

		}
	}

	// Possible ans 1

	// RWRWRWRW
	// WRWRWRWR
	// RWRWRWRW
	int ans1[n][m];
	for (int i = 0; i < n; ++i)
	{
		bool f=0;
		if(i&1)f=1;
		for (int j = 0; j <m; ++j)
		{
			if(!f)ans1[i][j] = 0;
			else ans1[i][j] = 1;
			f=!f;
		}
	}

	//Possible ans2;

	// WRWRWRWR
	// RWRWRWRW
	// WRWRWRWR
	int ans2[n][m];
	for (int i = 0; i < n; ++i)
	{
		bool f = 1;
		if(i&1)f=0;
		for (int j = 0; j <m; ++j)
		{
			if(!f)ans2[i][j] = 0;
			else ans2[i][j] = 1;
			f=!f;
		}

	}

	bool ans =1;

	// checking if ans1 matrix can be matched with given matrix

	for (int i = 0; i < n; ++i)
	{
		for (int j= 0; j < m; ++j)
		{
			// checking the already filled cells of the given matrix
			 if(arr[i][j] !=-1 and arr[i][j]!= ans1[i][j]){
			 	ans =0;
			 	break;
			 }
		}
		if(!ans)break;
	}
	if(ans){
		cout<<"Yes\n";
		for (int i = 0; i <n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				if(ans1[i][j]==0)cout<<'R';
				else cout<<'W';
			}
			cout<<endl;
		}
	}
	else{
		// check for ans2;
		ans =1;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j< m; ++j)
		{
			// checking the already filled cells of the given matrix
			 if(arr[i][j] !=-1 and arr[i][j]!= ans2[i][j]){
			 	ans =0;
			 	break;
			 }
		}
		if(!ans)break;
	}
	if(ans){
		cout<<"Yes\n";
		for (int i = 0; i <n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				if(ans2[i][j]==0)cout<<'R';
				else cout<<'W';
			}
			cout<<endl;
		}
	}
	else{
		cout<<"No\n";
	}

	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		solve();

	}
	
}
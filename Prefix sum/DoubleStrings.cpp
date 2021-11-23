#include <bits/stdc++.h>
using namespace std;
int cnt[30];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		// cout<<"s : "<<s<<endl;
		memset(cnt,0,sizeof(cnt));
		for (int i = 0; i < s.size(); ++i)
		{
			cnt[s[i] - 'a']++;
		}

		for (int i = 0; i < 26; ++i)
		{
			if(cnt[i]>=2){
				cout<<"Yes\n";
				goto p1;
		}
	}
	cout<<"No\n";
	p1:{ };	
} 

}
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base ::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
	while(t--){
		bool flag = true;
		string s;
		cin>>s;
		char ch = '1';
		int first = s.find_first_of(ch);
		// cout<<first<<endl;
		int last  = s.find_last_of(ch);
		// cout<<last<<endl;
		if(first == -1 || last == -1){
			flag = false;
		}

		if(flag){
		for (int i = first; i <=last; ++i)
		{
			if(s[i] !='1'){
				flag = false;
				// break;
			}
		}
		}
	
		
		if(flag)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
}
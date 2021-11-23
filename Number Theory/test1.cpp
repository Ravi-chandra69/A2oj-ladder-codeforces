#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		ll sum =0;
		int length = s.length();
		for (int i = 0; i <length; ++i)
		{
			sum += s[i]-'a';
		}


		int res = sum/length;
		double res1 = sum/length;

		if(res1==res){
			cout<<"Yes\n";
		}
		else
			cout<<"No\n";
	}
}
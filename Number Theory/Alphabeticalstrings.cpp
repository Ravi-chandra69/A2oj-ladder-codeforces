#include <bits/stdc++.h>
using namespace std;


void solve(){
	string s;
	cin>>s;
	int n = s.size();
	int i =0;
	int j=n-1;
	char ch = char('a' +n-1);
	bool ans = true;
	while(i<=j){
		if(ch==s[i]){
			i++;
			ch--;
		}
		else if(ch==s[j]){
			ch--;
			j--;

		}
		else{
			ans = false;
			break;
		}
	}
	if(!ans){
		cout<<"No"<<endl;
	}
	else{
		cout<<"Yes"<<endl;
	}
}


int main(){
	int t;
	cin>>t;
	while(t--){
	solve();
	}
	
}
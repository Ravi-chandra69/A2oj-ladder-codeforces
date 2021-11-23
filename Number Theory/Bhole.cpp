#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	int ct =0;
	if(n==1){
		cout<<1<<endl;
		return;
	}
	else{
		int temp=1;
		int sum =0;
		while(sum<n){
			sum+=temp;
			temp+=2;
			ct++;
		}
		cout<<ct<<endl;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
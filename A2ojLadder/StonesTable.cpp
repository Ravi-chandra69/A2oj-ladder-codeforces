#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n;cin>>n;
	
	string s;
	cin>>s;
	int length = s.length();
	int ct =0;


	for (int i = 0; i < length-1; ++i)
	{
		if(s[i]==s[i+1])
			ct++;

	}
	cout<<ct;

}
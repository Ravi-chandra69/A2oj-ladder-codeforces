#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;cin>>s;
	int f=0,l=s.size(),count=l/2;
	int f1=l%2; 
	for(int i=1;i<s.size();i++)
	  if(s[i]=='1')
	  {
	  	f=1;break;
	  }
	if(f&&f1) count++;
	cout<<count<<endl;
	return 0;
}

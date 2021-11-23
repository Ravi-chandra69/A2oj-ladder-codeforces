#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n,a,b;
		cin>>n>>a>>b;
		string s;
		cin>>s;

		if(b>=0)cout<<a*n+b*n<<endl;

		else{
		int c =1;
     	for (int i =1; i <n; ++i)
		{
			if(s[i]!=s[i-1])
				c++;
		}
		cout<<a*n +b*(c/2 +1)<<endl;		}
		
	}
	cout<<ceil(11/3);
}
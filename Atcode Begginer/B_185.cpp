#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,t;
	cin>>n>>m>>t;
	bool flag = false;

	int T=0;
	int maxi=n;
	for (int i = 0; i < m; ++i)
	{
		int a,b;cin>>a>>b;

		n -=(a-T);

		if(n<=0){
			flag = true;
		}

		if(flag){
			cout<<"No\n";
			break;
		}

		else{
				n+=b-a;

				if(n>maxi)
					n=maxi;

				T=b;

	}}
	n-=(t-T);
	if(!flag){n<=0?cout<<"No\n":cout<<"Yes\n";}
			


	}
	
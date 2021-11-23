#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t;cin>>t;
	while(t--){
		ll n;cin>>n;
		// cout<<n<<endl;
		if(n==1)cout<<9<<endl;
		else if(n==2)cout<<98<<endl;
		else if(n==3)cout<<989<<endl;

		else{
			cout<<989;
			int q=0;

			for (int i = 0; i < n-3; ++i)
			{
				cout<<q%10;
				q++;
			}
			cout<<endl;
		}
	}
}
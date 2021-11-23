#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(int n){

	if(n<=1)
		return false;
	for (int i =2; i <=sqrt(n); ++i)
	{
		if(n%i==0){
			// cout<<1<<endl;
			return false;

		}
	}
	return true;
}
int main(){
	int n,m;
	cin>>n>>m;
	bool flag = true;

	for (int i = n+1; i <=m; ++i)
	{
		if(isPrime(i)){
			if(i==m){
				cout<<"YES\n";
				flag = false;
				break;
			}
			else{
				cout<<"NO\n";
				flag=false;
				break;
			}

		}

	}

	if(flag)
		cout<<"NO\n";
}
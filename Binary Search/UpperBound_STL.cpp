#include <bits/stdc++.h>
using namespace std;

int main(){
	int n = 6;
	int a[]={1,2,3,4,6,45};
	int x;cin>>x;
	int ind = upper_bound(a,a+n,x) -a;
	// cout<<ind<<endl;
	ind--;
	if(ind>=0 && a[ind]==x) cout<<ind<<endl;
	else cout<<-1;

	}
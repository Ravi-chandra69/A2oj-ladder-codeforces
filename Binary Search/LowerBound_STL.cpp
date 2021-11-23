#include <bits/stdc++.h>
using namespace std;

int main(){
	int n = 6;
	int a[]={1,2,3,4,4,4,5,6};
	int x;cin>>x;
	int ind = lower_bound(a,a+n,x) -a;
	if(ind!=n && a[ind]==x) cout<<ind<<endl;
	else cout<<-1;

	// vector <int> v= {1,2,3,4,5,6,7};
	// int x; cin>>x;
	// int ind = lower_bound(v.begin(),v.end(),x)-v.begin();
	// if(ind!=v.end() && v[ind] == x)
	// 	cout<<ind;
	// else cout<<-1;

}
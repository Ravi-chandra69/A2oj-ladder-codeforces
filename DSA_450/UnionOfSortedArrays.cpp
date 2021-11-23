#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	set<int>s;
	cin>>n>>m;
	int a[n],b[m];
	int temp[n+m];
	for (int i = 0; i < n; ++i)
		cin>>a[i];

	for (int i = 0; i < m; ++i)
		cin>>b[i];

	int i,j,k,ct;
	i=j=k=ct=0;

	for (int i = 0; i < n; ++i)
	{
		s.insert(a[i]);
	}
	for (int i = 0; i < m; ++i)
	{
		s.insert(b[i]);
	}

	// for (auto it = s.begin(); it !=s.end(); ++it)
 //        cout << ' ' << *it;

 //    cout<<endl;
	cout<<s.size();


}
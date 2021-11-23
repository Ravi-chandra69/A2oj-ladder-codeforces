#include <bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;
	
	while(t--){
		vector <int> v;
		int ct=0;
		int n;
		cin>>n;
		for (int i = 0; i <n; ++i){
			int x;
			cin>>x;
			v.push_back(x);
		}

		sort(v.begin(), v.end());
		int i=0;

		while(i<n && v[i]==v[0]){
			i++;
		}
		cout<<n-i<<endl;
		}
}
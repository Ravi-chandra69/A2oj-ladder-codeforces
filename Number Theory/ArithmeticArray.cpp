#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector <int> v;
		int sum =0;
		for (int i = 0; i < n; ++i)
		{
			int x;cin>>x;
			v.push_back(x);
			sum +=x;
		}
		if(sum ==n){
			cout<<0<<endl;
		}
		else if(sum<n){
			cout<<1<<endl;
		}
		else{
			cout<<sum-n<<endl;
		}

	}
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int n,m,t;
	cin>>n>>m>>t;
	int ct =0;

	// cout<<m<<endl;
	// cout<<n<<m<<t;

	vector <pair <int,int>> v(m);
	for (int i = 0; i < m; ++i)
	{
		// cout<<i<<endl;
		cin>>v[i].first>>v[i].second;

	}
	// for (int i = 0; i <m; ++i)
	// {
	// 	cout<<v[i].first<<" "<<v[i].second;
	// 	cout<<endl;
	// }

	ll left = n-v[0].first;
	// cout<<left>;
	if(left==0)
		cout<<"No\n";
	else{
		for (int i = 0; i < m; ++i)
		{
			if(left==n){
				left=left;
			}
			else{
			ll temp = v[i].second-v[i].first;
			left+= temp;
			}
			

			if(v[i].second!=v[i+1].first){
				ll decrement = 0.5s
				int temp= v[i+1].second-v[i].first;
				left = left - temp;
				if(left==0){
					cout<<"No\n";
					ct++;
					break;
				}

			}
		}	

		ll last = t-v[m-1].second;

		if(ct==0){
		if(last>left)
			cout<<"Yes\n";
		else
			cout<<"No\n";	
		}
		
	}
		
	
}
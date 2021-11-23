#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int total=0;
		int n;
		cin>>n;
		vector <int> v,even, odd;

		for (int i = 0; i <n; ++i){
			int x;
			cin>>x;
			if(x%2==0)
				even.push_back(x);
			else
				odd.push_back(x);
		}
		for(auto i :even) v.push_back(i);
		for(auto i :odd) v.push_back(i);
		// for (int i = 0; i < v.size(); ++i)
		// {
		// 	cout<<v[i]<<" ";
		// }
		// cout<<endl;
 		for (int i = 0; i < n; ++i)
		{
			for (int j = i+1; j < n; ++j)
			{
				int temp = __gcd(v[i], 2*v[j]);
				if(temp>1)
					total++;
			}
		}
		cout<<total<<endl;
	}
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	// cout<<n;
	double res;
	vector <pair<int,int>>a(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i].first>>a[i].second;
	}
	int total =0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i+1;j <n; ++j)
		{
			
		double ans = ((double)a[i].second-a[j].second)/((double)a[i].first-a[j].first);

			// res = ans1/ans2;

			ans>=-1.0 and ans<=1.0?total++:total=total;
		}
		// cout<<ans<<endl;
	}
	cout<<total;


}
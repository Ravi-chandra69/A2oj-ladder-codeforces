#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	vector <int> v(n);
	for(auto &x:v)
		cin>>x;

	int max =0;
	for (int i = 0; i < n; ++i)
	{
		int sum =0;
		for (int j = i; j <n; ++j)
		{
			if(v[j]>=v[i]){
				sum+=v[i];
			}
			else{
				break;
			}
		}
		sum>max?max=sum:max=max;

		
	}
	cout<<max;

}
// Largest Sum Contiguous Subarray


#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n+1];
	for (int i = 1; i <=n; ++i)
	{
		cin>>a[i];
	}
	int max = INT_MIN;

	for (int i = 1; i <=n; ++i)
	{
		for (int j = i; j <=n; ++j)
		{
			int sum =0;
			for (int k = i; k<=j; ++k)
			{
				sum += a[k];
			}
			if(sum>max)
				max=sum;
		}
	}
	cout<<max;
}
// Naive approach
// Tc = o(n^3)
// Sc = O(1)
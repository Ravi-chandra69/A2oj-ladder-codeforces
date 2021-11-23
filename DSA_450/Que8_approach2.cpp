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
	int pre[n+1];
	pre[0]=0;

	for (int i = 1; i <=n; ++i)
	{
		pre[i] = pre[i-1] + a[i];
	}

	for (int i = 1; i<=n; ++i)
	{
		for (int j = 1; j<=n; ++j)
		{
			int sum = pre[j] - pre[i-1];
			if(sum>max){
			max = sum;
		}
		}
		
	}
	cout<<max;

}

// Tc =O(n^2);
// Sc = O(n);
// Because we're using prefix sum array
// to get the sum from i to a[i] in o(1).
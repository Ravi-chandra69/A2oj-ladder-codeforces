// Largest Sum Contiguous Subarray
// Kadane's algorithm

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int currentSum = 0;
	int max = 0;
	int a[n+1];
	for (int i = 0; i <n; ++i)
	{
		cin>>a[i];
	}

	for (int i = 0; i <n; ++i)
	{
		currentSum += a[i];
		if(currentSum>max)
			max = currentSum;

		if(currentSum<0)
			currentSum = 0;
		// else{
		// 	cout<<a[i]<<" "<<endl;
		// }
	}
	cout<<max<<endl;
}


// Tc = O(n);
// Sc = O(1);
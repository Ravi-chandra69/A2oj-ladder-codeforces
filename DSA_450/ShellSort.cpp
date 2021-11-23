#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int gap;

	for (gap=n/2 ; gap >=1; gap=gap/2)
	{
		for (int j = gap; j < n; j++)
		{
			for (int i = j-gap; i >=0; i= i-gap)
			{
				if(a[i+gap]>a[i])
					break;
				else
					swap(a[i+gap],a[i]);

			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<" "<<endl;
	}
	// cout<<endl;
}
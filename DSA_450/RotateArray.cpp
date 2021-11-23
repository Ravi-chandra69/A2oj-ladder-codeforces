#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
		cin>>a[i];
	cin>>k;

	int low =0;
	int high = n-k-1;

	while(low<=high){
		swap(a[low],a[high]);
		low++;
		high--;
	}
	low = n-k;
	high = n-1;
	while(low<=high){
		swap(a[low],a[high]);
		low++;
		high--;
	}
	low = 0;
	high = n-1;
	while(low<=high){
		swap(a[low],a[high]);
		low++;
		high--;
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<" ";
	}



}
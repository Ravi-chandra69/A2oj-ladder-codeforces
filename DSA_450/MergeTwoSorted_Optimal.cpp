#include <bits/stdc++.h>
using namespace std;

int nextGap(int gap){
	if(gap<=1)
		return 0;
	return ceil(gap/2);
}
int main(){
	int n,m;
	cin>>n>>m;
	int gap = n+m;
	int a[n];
	int b[m];
	for (int i = 0; i < n; ++i)
		cin>>a[i];
	for (int i = 0; i < m; ++i)
		cin>>b[i];

	int i,j;
	i=j=0;
	for(gap = nextGap(gap);gap>0;gap =nextGap(gap)){
		
		// comparing for the first array
	for ( i = 0; i+gap <n; ++i)
	{
		if(a[i]>a[i+gap])
			swap(a[i],a[i+gap]);
	}

	// comparing for both the arrays

	for ( j= gap>n?gap-n:0; i < n && j<m; i++,j++)
	{
		if(a[i]>b[j])
			swap(a[i],b[j]);
	}

	// comparing for the third array
	if(j<m){
			for (int j = 0; j+gap < m; ++j)
	{
		if(b[j]>b[j+gap])
			swap(b[j],b[j+gap]);
	}

	}

	}

	for (int p = 0; p < n; ++p)
	{
		cout<<a[p]<<" ";
	}

	for (int q = 0; q< m; ++q)
	{
		cout<<b[q]<<" ";
	}
	



	
	
}
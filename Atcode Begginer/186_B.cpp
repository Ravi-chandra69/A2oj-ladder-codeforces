#include <bits/stdc++.h>
using namespace std;

int main(){
	int rows, col;
	cin>>rows>>col;

	int a[rows][col];
	
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			cin>>a[i][j];
		}
	}

	int min =a[0][0];

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			if(a[i][j]<min)
				min = a[i][j];
		}
	}
	int ans =0;
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			ans+=a[i][j]-min;	
		}
	}
	cout<<ans;
	



}
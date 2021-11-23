#include <bits/stdc++.h>
using namespace std;


int main(){
	int mat[3][3];
	int arr[3][3];
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			arr[i][j] = 1;
		}
	}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cin>>mat[i][j];
		}
	}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
		if(mat[i][j]%2==0)
			arr[i][j]=1;
		else
			arr[i][j]=0;
		}
		
	}n

		for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout<<arr[i][j];
		}
		cout<<endl;
	}

	

}
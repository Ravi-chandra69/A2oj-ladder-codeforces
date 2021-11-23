// Find the "Kth" max and min element of an array 


#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int ct=0;
	int a[n];
	for (int i = 0; i < n; ++i)
		cin>>a[i];
	int min =INT_MAX;

	for (int i = 0; i < n; ++i)
	{
		if(a[i]<min){
			min = a[i];
		}
	}
	int second_min = min;

	for (int i = 0; i < n; ++i)
	{
		if(a[i]<second_min){
			second_min = a[i];
		}
	}

	cout<<"Third minimum element is : "<<second_min<<endl;

}
// Given an array which consists of only 
// 0, 1 and 2. Sort the array without using any sorting algo


// Use dutch national flag algo
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;b
	int a[n];
	for (int i = 0; i <n; ++i)
		cin>>a[i];

	int low,mid,high;
	low=mid=0;
	high=n-1;

	while(mid<=high){
		if(a[mid]==0){
			swap(a[low],a[mid]);
			mid++;
			low++;
		}
		else if(a[mid]==1){
			mid++;
		}
		else if(a[mid] ==2){
			swap(a[mid],a[high]);
			high--;
			// mid++;
		}

	}

	for (int i = 0; i <n; ++i)
	{
		cout<<a[i]<<" ";
	}

}
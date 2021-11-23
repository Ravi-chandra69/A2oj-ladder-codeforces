// Search an element in a Sorted & Rotated Array

#include <bits/stdc++.h>
using namespace std;


int binarySearch(int a[],int n,int key){
	int low = 0;
	int high = n-1;
	
	while(low<=high){
		cout<<"Low : "<<low<<endl;
		cout<<"high : "<<high<<endl;

		int mid;
		mid = (low+high)/2;
		cout<<"mid : "<<mid<<endl;
		cout<<endl;

		if(key == a[mid])
			return mid;

		if(a[low]<a[mid]){
			if(key>=a[low] && key<a[mid]){
				high = mid-1;
			}
			else{
				low = mid+1;
			}
		}
		else{
			if(key>a[mid] && key<=a[high]){
				low = mid+1;
			}
			else{
				high = mid-1;
			}
		}
	}
	return -1;
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int key;
	cin>>key;
	int result = binarySearch(a,n,key);
	if(result==-1)
		cout<<"Element is not present in the given array"<<endl;
	else
		cout<<"Element found at index : "<<result<<endl;
}
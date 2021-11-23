#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int key, int low, int high){
	if(high>=low){
		int mid = (low+high)/2;

	if(a[mid]==key)
		return mid;

	if(a[mid]>key)
		return binarySearch(a,key,low,high=mid-1);

	if(a[mid]<key)
		return binarySearch(a,key,low=mid+1,high);
	}
	

	return -1;
}


int main(){
	int a[]= {1,2,3,4,5,6,7};
	// int x = sizeof(a)/sizeof(a[0]);
	 int n = sizeof(a) / sizeof(a[0]);
	int low=0;
	int high = n-1;
	int x = 5;

	
	int result = binarySearch(a,x,low,high);

	if(result==-1)
		cout<<"Not found";
	else
		cout<<"element "<<x<<" found at index : "<<result;



}
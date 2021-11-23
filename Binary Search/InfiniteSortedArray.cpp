#include <bits/stdc++.h>
using namespace std;


int binarySearch(int a[], int key, int low, int high){

	while(high>=low){
		int mid = (low + high)/2;
		if(a[mid]==key)
			return mid;
		else if(a[mid]>key)
			high =mid-1;
		else
			low = mid+1;
	}
	return -1;
}

int searchInfinite(int a[],int key){
	int low =0;
	int high = 1;

	while(a[high]<key){
		low = high;
		high = high*2;
	}

	return binarySearch(a,key,low,high);
}


int main(){
	int a[]= {2,4,5,9,10};
	int key = 8;

	int result = searchInfinite(a,key);

	if(result==-1)
		cout<<"Element not found"<<endl;
	else
		cout<<"Element found at index : "<<result;
}
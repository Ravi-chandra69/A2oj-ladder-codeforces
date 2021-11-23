#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n,int key){

	int low =0;
	int high = n-1;
	while(low<=high){
		int mid = (low+high)/2;

	if((arr[mid]==key))
		return mid;

	else if(arr[mid]>key)
		high = mid-1;
	else
		low = mid +1;

	}
	return -1;
	
}


int main(){
	cout<<"Enter the size of the array : "<<endl;
	int n,key;
	cin>>n;
	int arr[n];
	cout<<"Enter the values of the array : "<<endl; 
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	cout<<"Enter the value that you want to search : "<<endl;
	cin>>key;

	int result = binarySearch(arr,n,key);
	if(result==-1)
		cout<<"not found";
	else
		cout<<"Element found at index : "<<result<<endl;


	
}
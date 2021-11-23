#include <bits/stdc++.h>
using namespace std;

void sorting(int arr[], int size){

	if(size<=1)
		return;

	sorting(arr,size-1);

	int last = arr[size-1];
	int j = size-2;

	while(j>=0 && arr[j]>last){

		arr[j+1] = arr[j];
		j--;
	}
	arr[j+1] = last;
}

void print(int arr[], int n){

	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
}

int main(){
	
	int arr[] = {2,4,5,3,7,9};

	int size = sizeof(arr)/sizeof(arr[0]);

	print(arr,size);
	cout<<endl;
	sorting(arr,size);
	print(arr,size);
}
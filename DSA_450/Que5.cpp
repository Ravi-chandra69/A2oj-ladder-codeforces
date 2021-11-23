// Move all negative numbers to beginning 
// and positive to end with constant extra space

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];

	for (int i = 0; i < n; ++i)
		cin>>a[i];

	int low =0;
	int high = n-1;

	while(low<=high){

		// left and right elements are -ve
		if(a[low]<0 && a[high]<0){
			low++;
		}
		// left +ve, right -ve
		else if(a[low]>0 && a[high]<0){
			swap(a[low],a[high]);
		}

		// both +ve
		else if(a[low]>0 && a[high]>0){
			high--;
		}
		else{
			low++;
			high--;
		}
		

}
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;

}
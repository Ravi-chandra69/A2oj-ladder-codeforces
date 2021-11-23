#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,max,min,i;
	cin>>n;
	int a[n];
	for (int i = 0; i <n; ++i)
		cin>>a[i];

	if(n%2==0){
		if(a[0] > a[1]){
			max = a[0];
			min = a[1];
		}
		i=2;
	}
	else{
		max = min = a[0];
		i=1;
	}
	while(i<n-1){
		if(a[i]>a[i+1]){
			if(a[i]>max){
				max = a[i];
			}
			if(a[i]<min){
			min = a[i];
		}
		}

		else{
			if(a[i+1]>max){
				max = a[i+1];
			}
			if(a[i]<min)
				min = a[i];
		}

		i+= 2;

}

cout<<"Max element is : "<<max<<endl;
cout<<"Minimum element is : "<<min<<endl;
}


// Tc if n is even : 1 + 3*(n-2)/2
// Tc if n is odd : 3*(n-1)/2
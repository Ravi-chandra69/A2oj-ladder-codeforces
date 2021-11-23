// Maximum and minimum of an 
// array using minimum number of comparisons

// OPTIMAL SOLUTION

#include <bits/stdc++.h>
using namespace std;


int main(){
	int n,min,max;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i) 
		cin>>a[i];

	if(n==1)
		min = max = a[0];

	else {
		if(a[0]>a[1]){
			max = a[0];
			min = a[1];
		}
		else{
			max = a[1];
			min = a[0];
		}

		for (int i = 2; i < n; ++i)
		{
			if(a[i]<min)
				min = a[i];
			else if(a[i]>max)
				max = a[i];

		}

	}
	cout<<"max : "<<max<<endl;
	cout<<"min : "<<min<<endl;


	
}


// Tc  =  2 * (n-2) +1 

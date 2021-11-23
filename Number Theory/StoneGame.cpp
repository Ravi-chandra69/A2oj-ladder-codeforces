#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int max_element = INT_MIN;
		int min_element = INT_MAX;


		for (int i = 0; i <n; ++i)
		{
			cin>>a[i];
			max_element = max(max_element,a[i]);
			min_element = min(min_element,a[i]);
		}
		int left_minEle;
		int left_maxEle;
		for (int i = 0; i <n; ++i)
		{
			if(a[i]==min_element)
				left_minEle = i+1;
			if(a[i]==max_element)
				left_maxEle = i+1;

		}
		int right_minEle = (n-left_minEle)+1;
		int right_maxEle = (n-left_maxEle)+1;

		int a1 = max(right_maxEle,right_minEle);
		int a2 = max(left_maxEle,left_minEle);

		int a3 = min(left_maxEle+right_minEle,left_minEle+right_maxEle );


		cout<<min(a1,min(a2,a3))<<"\n";




	}


}
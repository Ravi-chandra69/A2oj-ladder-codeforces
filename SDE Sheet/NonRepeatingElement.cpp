#include <bits/stdc++.h>
using namespace std;


int main(){
	int a=0;
	int b=0;
	int N;
	cin>>N;
	int arr[N-1];
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	int x=arr[0];
	for(int i=1;i<N;i++){
		x=x^arr[i];
	}
	int set_digit = x & ~(x-1);

	for(int i=0;i<N;i++){
		if(arr[i] & set_digit){
			a=a^arr[i];
		}
		else{
			b=b^arr[i];
		}
	}
	cout<<a<<" "<<b<<endl;
}
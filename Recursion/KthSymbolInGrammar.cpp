#include <bits/stdc++.h>
using namespace std;

int solve(int n,int k, int mid){

	if(n==1 || k==1)
		return 0;
	else if(mid>=k){
		int ans = solve(n-1,k,mid);
		return ans;
	}

	else{
		int ans = solve(n-1,k-mid,mid);
		int answer = ans^1;
		return answer;
	}


}

int main(){
	int n,k;
	cin>>n>>k;

	int length = pow(2,n-1);
	int mid = length/2;

	cout<<solve(n,k,mid);
}
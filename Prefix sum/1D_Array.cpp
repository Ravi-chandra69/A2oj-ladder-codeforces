/*Given an array of N integers. Given Q queries,
in each query given L and R.Print sum of array
elements from L to R(L,R inclusive)

Constraints :
1 <= N <= 10^5
1 <= a[i] <= 10^9
1 <= Q <=10^5
1<=L, R<=N
*/


#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int a[N];
int prefix[N];


int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	for (int i = 1; i <=n; ++i)
	{
		cin>>a[i];
		prefix[i] = prefix[i-1] + a[i];

	}
	int q;
	cin>>q;
	while(q--){
		int l,r;
		cin>>l>>r;
		cout<<prefix[r] - prefix[l-1]<<'\n';
	}
}

// O(N) + O(Q) = 10^5
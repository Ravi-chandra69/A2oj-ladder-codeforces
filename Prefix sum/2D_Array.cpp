/*Given an 2D array of N*Nintegers. Given Q queries,
in each query given a,b,c and d.Print sum of square 
represented by (a,b) as top left point and (c,d) as 
top bottom right point.


Constraints :
1 <= N <= 10^3
1 <= a[i] <= 10^9
1 <= Q <=10^5
1 <=a,b,c,d<=N
*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
int arr[N][N];
int prefix[N][N];

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	for (int i = 1; i <=n; ++i)
	{
		for (int j = 1; j <=n; ++j)
		{
			cin>>arr[i][j];
			prefix[i][j] = arr[i][j] + prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];

		}
	}
	int q;
	cin>>q;
	while(q--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		cout<<prefix[c][d] - prefix[a-1][d] - prefix[c][b-1] + prefix[a-1][b-1]<<'\n';
	}
}
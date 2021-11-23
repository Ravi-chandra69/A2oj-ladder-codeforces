#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	int a,b,c,d;
	a=b=c=d=0;
	for (int i = 0; i < n; ++i)
	{
		int x,y;cin>>x>>y;
		x==0?a++:b++;
		y==0?c++:d++;
	}
	int temp = min(a,b);
	int temp2 = min(c,d);

	cout<<temp+temp2;
}
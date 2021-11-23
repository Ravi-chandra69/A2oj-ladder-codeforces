#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
	int range= pow(2,x)-1;
	int count=0;

	for (int i = 0; i <=range; ++i)
	{

		
		int lhs=i^(i+1);
		int rhs=(i+2)^(i+3);

		if(lhs==rhs){
			count++;
		}	
	}
	cout<<count<<endl;

	}
 }
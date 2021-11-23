#include <bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		// int second=-1;
		vector <int> v,temp;
		for (int i = 0; i < 4; ++i)
		{
			int x;
			cin>>x;
			v.push_back(x);
		}
		int b = max(v[0],v[1]);
		int c  = max(v[2],v[3]);

		sort(v.begin(), v.end());

		if(max(b,c) == max(v[2],v[3]) && min(b,c) ==  min(v[2],v[3]))
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
		}
		// for (int i = 0; i <temp.size(); ++i)
		// {
		// 	cout<<temp[i]<<" ";
		// }
		

	
}
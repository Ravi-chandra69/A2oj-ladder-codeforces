#include <bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;
	while(t--){
		int ct =0;
		int x1,x2,y1,y2,z1,z2;
		cin>>x1>>x2>>y1>>y2>>z1>>z2;

		if(x2>=x1){
			ct++;
		}
		if(y2>=y1){
			ct++;
		}
		if(z1>=z2){
			ct++;
		}

		if(ct>=3)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
}

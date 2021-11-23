#include <bits/stdc++.h>
using namespace std;


void solve(){
	int n;
	cin>>n;
	int a[n];
	int b[n];
	int sum1,sum2;
	sum1=sum2=0;
	vector <int> pos;
	vector <int>neg;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		sum1+=a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>b[i];
		sum2+=b[i];
	}

	if(sum1!=sum2){
		cout<<-1<<endl;
		return;
	}
	else{

		for (int i = 0; i < n; ++i)
		{
			int x =a[i]-b[i];
			if(x>0){
				while(x--)
					pos.push_back(i);
			}
			else if(x<0){
				x*=-1;
				while(x--)
					neg.push_back(i);
			}
		}
	}
	int size= pos.size();
	cout<<size<<endl;
	for (int i = 0; i <pos.size(); ++i)
	{
		cout<<pos[i]+1<<" "<<neg[i]+1<<"\n";
	}
}

int main(){
	int n;cin>>n;
	while(n--){
		solve();
	}
}
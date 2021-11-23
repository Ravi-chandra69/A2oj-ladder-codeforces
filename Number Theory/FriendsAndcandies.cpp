#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int ct=0;
		cin>>n;
		vector <int> v;
		for (int i = 0; i <n; ++i)
		{
			int x;
			cin>>x;
			v.push_back(x);
		}
		double sum = accumulate(v.begin(),v.end(),0);
		double avg = sum/n;
		// cout<<"avg is: "<<avg<<endl;
		int average = avg;
		double temp = average-avg;
		if(temp==0){
			// cout<<"temp"<<temp<<endl;
			for (int i = 0; i <n; ++i)
			{
				if(v[i]>avg)
					ct++;
			}
			cout<<ct<<endl;
		}
		else
		{
			cout<<-1<<endl;
		}
		v.clear();

	}
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int lower,upper;
	lower=upper=0;
	int len= s.length();

	// if(s[5]==97)
	// 	cout<<"yes";

// 	transform(s.begin(),s.end(),s.begin(),::toupper);

// cout<<s;

	for (int i = 0; i <len; ++i)
	{
		if(s[i]>=97)
			lower++;
		else
			upper++;
	}
	// cout<<lower<<endl;
	// cout<<upper<<endl;

	if(lower>upper)
		transform(s.begin(),s.end(),s.begin(),::tolower);
	else if(lower==upper)
		transform(s.begin(),s.end(),s.begin(),::tolower);
	else
		transform(s.begin(),s.end(),s.begin(),::toupper);

	cout<<s;


}
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	bool flag = false;
	vector <string> v;
	while(n--){
		string s;
		cin>>s;
		v.push_back(s);
	}
	set <string> s;
	string temp = "!" + v[0];
	s.insert(temp);
	// cout<<temp;
	for (int i = 1; i < v.size(); ++i)
	{
		if(s.find(v[i])!=s.end()){
			int size = v[i].size();
			// cout<<size<<endl;
			for (int j = 1; j < size; ++j)
			{
				flag =true;
				cout<<v[j][i];

			}
			if(flag)
				break;
		}
	}

	if(flag==false){
		cout<<"satisfiable";
	}
}
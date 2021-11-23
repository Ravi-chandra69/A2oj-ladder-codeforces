#include <bits/stdc++.h>
using namespace std;

void solve(string ip, string op){

	if(ip.length() == 0){
		cout<<op<<endl;
		return;
	}

	string output1 = op;
	string output2 = op;

	// string x = ip[0];
	// output2.append(x);

	output2 += ip[0];

	ip.erase(ip.begin() + 0);

	solve(ip,output1);
	solve(ip,output2);
	return;
}
int main(){

	string ip;
	cin>>ip;
	string op = "";
	solve(ip,op);


}
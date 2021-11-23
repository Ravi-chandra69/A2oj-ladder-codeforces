#include <bits/stdc++.h>
using namespace std;


int euclidean(int a, int b){
	if(b==0)
		return a;
	else
		return euclidean(b,a%b);
}


int main(){
	int a,b;
	cin>>a>>b;
	cout<<"gcd is : "<< euclidean(a,b)<<endl;
}
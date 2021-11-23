#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	int temp =0;
	int temp1=0;

	while(a!=0){
		temp+=a%10;
		a=a/10;
	}
	while(b!=0){
		temp1+=b%10;
		b=b/10;
	}
	temp>temp1?cout<<temp:cout<<temp1;

}
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll power(ll base, ll n){

	ll ans =1;
	while(n>0){
		if(n%2){
			// whenever power is odd , club it with the ans
			ans = ans * base; 
		}
		// make base square each time
		base = base * base; 

		
		n>>=1;  //dividing n by 2 using right shift operator
	}
	return ans;

}
int main(){
	int t;
	cin>>t;
	while(t--){
	ll base;
	ll n ;
	cin>>base>>n;
	
	cout<<power(base,n);

	}

	
}
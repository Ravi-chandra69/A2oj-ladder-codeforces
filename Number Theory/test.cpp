#include <bits/stdc++.h>
using namespace std;


void solve(){
	int a1,b1,a2,b2,f1,f2;
	int  a, b, c, d, e, f;
	cin>>a1>>b1>>a2>>b2>>f1>>f2;

	// cout<<a1<<a2<<endl;
	int ans = abs(a1-a2) + abs(b1-b2);
	// cout<<ans<<endl;
	if(a1==a2 and b1==b2){
		cout<<ans<<endl;
		return;
	}
	if(a1==a2){
		// cout<<"if"<<endl;
		if(f1==a1 and f2>=min(b1,b2) and f2<=max(b1,b2)){
			ans+=2;
		}
	}
	if(b1==b2){
		// cout<<"else"<<endl;
		if(f2==b2 and f1>=min(a1,a2) and f1<=max(a1,a2)){
			ans+=2;		
		}
	}
	cout<<ans<<endl;
}


int main(){
	int t;
	cin>>t;
	while(t--){
	solve();
	}
	
}
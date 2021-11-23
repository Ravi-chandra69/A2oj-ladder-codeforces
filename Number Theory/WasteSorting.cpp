#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t;cin>>t;

	while(t--){
		ll x,y,z;cin>>x>>y>>z;
		ll a,b,c,d,e;
		cin>>a>>b>>c>>d>>e;

		// cout<<x<<y<<z<<endl;
		// cout<<a<<b<<c<<d<<e<<endl;

		bool flag = true;

		if(a>x){
			flag = false;
			// cout<<"False kr dia1"<<endl;
			// break;
		}	
		else{
			x=x-a;
		}

		if(b>y){
			flag = false;
			// cout<<"False kr dia2"<<endl;
			// break;
		}	
		else{
			y=y-b;
		}

		if(c>z){
			flag = false;
			// cout<<"False kr dia3"<<endl;
			// break;
		}	
		else{
			z=z-c;
		}

		ll temp = min(d,x);
		d= d- temp;
		// cout<<"d: "<<d<<endl;
		ll temp2 = min(e,y);
		e = e-temp2;
// cout<<"e: "<<e<<endl;
		if(d+e>z){
			flag= false;
			// cout<<"False kr dia4"<<endl;
			// break;
		}
		// cout<<flag<<endl;
		flag==true?cout<<"Yes\n":cout<<"No\n";
	}

}
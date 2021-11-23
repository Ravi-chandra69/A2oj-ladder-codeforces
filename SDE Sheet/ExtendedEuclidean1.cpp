#include <bits/stdc++.h>
using namespace std;

// ax + by = gcd(a,b)
// gcd(a,0) = a;

// ax + 0 = a 
// x=1, y=0;



struct triplet{
	int x,y,gcd;
};


triplet extendedEuclid(int a,int b){
	if(b==0){
		triplet ans;
		ans.x =1;
		ans.y=0;
		ans.gcd =a;
		return ans;
	}

	triplet smallAns = extendedEuclid(b, a%b);
	triplet ans;
	ans.gcd = smallAns.gcd;
	ans.x = smallAns.y;
	ans.y = smallAns.x - (a/b)*smallAns.y;
	return ans;

}

int main(){
	int a,b;
	cin>>a>>b;
	triplet ans;
	ans= extendedEuclid(a,b);
	cout<<"gcd is : "<<ans.gcd<<endl;
	cout<<"x is : "<<ans.x<<endl;
	cout<<"y is : "<<ans.y<<endl;
}
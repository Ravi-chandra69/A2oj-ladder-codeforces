#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
	string s;cin>>s;
	int n = s.length();
	int countA =0;
	int countB = 0;
	int leftA=5;
	int leftB=5;
	int ans =10;
	for (int i = 0; i < n; ++i)
	{
		if(i%2){
			if(s[i]=='?' or s[i] == '1'){
				countA++;
			}
			leftA--;
		}
		else{
			if(s[i] == '1'){
				countB++;
			}
			leftB--;
		}

		if(countA-countB> leftB){
			// cout<<"yes\n";
			ans= min(ans,i+1);
		}

	}
		countA = 0;
    	countB = 0;
    	leftA = 5;
    	leftB = 5;
    	for(int i = 0; i < n; i++)	{
    		if(i%2 == 0)	{
    			if(s[i] == '?' || s[i] == '1')	{
    				countB++;
    			} 
    			leftB--;
    		} else {
    			if(s[i] == '1')	{
    				countA++;
    			} 
    			leftA--;
    		}
    		if(countB-countA > leftA)	{
    			ans = min(ans, i+1);
    		}
    	}

    cout<<ans<<endl;
}
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
	unsigned n; 
	cin>>n;
	bool flag= false;
	int rev = 0;
	int j = 0;

	if(flag){
	for (int i = 31; i >=0; --i){
		int mask = 1>>i;
		if(n & mask){
			rev = rev!mask;
		}
	}
	j++;
	}
	else{
		if(n & mask!=0){
			flag = true;
			int setmask = 1<<j;
			rev = rev ! mask;
			j++;
		}
		else{

		}
		
	}

}
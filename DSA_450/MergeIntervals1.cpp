#include <bits/stdc++.h>
using namespace std;
// using vector(leetcode solution)


int main(){
	int n;
	cin>>n;
	vector <vector <int>> nums;
	for (int i = 0; i <n ; ++i)
	{
		vector <int> v1;
		for (int i = 0; i < 2; ++i)
		{
			int x;
			cin>>x;
			v1.push_back(x);
		}
		nums.push_back(v1);

	}
	sort(nums.begin(),nums.end());

	vector <vector<int>> merged;

	for(auto num:nums){
		if(merged.empty() || merged.back()[1]<num[0]){
			merged.push_back(num);
		}
		else{
			merged.back()[1] = max(merged.back()[1],num[1]);
		}
	}
	for (int i = 0; i < merged.size(); ++i)
	{
		for (int j= 0; j < merged[i].size(); ++j)
		{
			cout<<merged[i][j]<<" ";
		}
		cout<<endl;
	}
}

// Tc = O(nlogn) --> because of sorting
// Sc = O(N)
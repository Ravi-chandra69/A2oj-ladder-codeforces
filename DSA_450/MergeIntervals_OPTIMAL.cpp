#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector <vector<int>> nums;
	for (int i = 0; i <n ; ++i)
	{
		vector <int> v1;

		for (int j = 0; j < 2; ++j)
		{
			int x;
			cin>>x;
			v1.push_back(x);
		}
		nums.push_back(v1);
	}
	sort(nums.begin(),nums.end());
	int index = 0;
	for (int i = 1; i < n; ++i)
	{
		if(nums[index][1]>=nums[i][0]){
			cout<<"in if :"<<endl;
			nums[index][1] = max(nums[index][1],nums[i][1]);
		}
		else{
			index++;
			nums[index] = nums[i];

		}
	}

	for (int i = 0; i <n; ++i)
	{
		for (int j = 0; j <nums[i].size(); ++j)
		{
			cout<<nums[i][j]<<" ";
		}
		cout<<endl;
	}

	nums = nums[slice(1,1,1)];


}
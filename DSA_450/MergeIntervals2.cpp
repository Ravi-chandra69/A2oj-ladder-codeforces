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
	stack <vector<int>> s;
	s.push(nums[0]);
	for(int i=0;i<n;i++){
		int start1 = s.top()[0];
		int end1 = s.top()[1];

		int start2 = nums[i][0];
		int end2 = nums[i][1];

		if(end1 < start2){
			s.push({start2, end2});
		}
		else{
			s.pop();
			end1 = max(end1,end2);
			s.push({start1,end1});
		}

	}

	while(!s.empty()){
		cout<<s.top()[0]<<" "<<s.top()[1];
		s.pop();
	}

}

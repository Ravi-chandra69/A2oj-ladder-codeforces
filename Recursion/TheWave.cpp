#include <bits/stdc++.h>
using namespace std;
#define test_case \
  int t;          \
  cin >> t;       \
  while (t--)

void initial()
{
  std::ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}

int main()
{
  initial();
  int n, m, k;
  cin>>m>>n;
  int arr[m];
  for(int i=0; i<m; i++){
      cin>>arr[i];
  }

  sort(arr, arr+m);

  for(int i=0;i<n;i++){
      cin>>k;
      int *p = lower_bound(arr, arr+n, k);
      // cout<<"k : "<<k<<endl;
      // cout<<"p is : "<<*p<<endl;
      // cout<<p-arr<<endl;
      cout<<(*p == k ? "0" : (p-arr)%2 ? "NEGATIVE" : "POSITIVE") <<"\n";
  }
  return 0;
}
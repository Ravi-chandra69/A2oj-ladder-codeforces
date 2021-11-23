#include <bits/stdc++.h>
using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n,k;
  cin>>n>>k;
  int a[n];

  for (int i = 0; i < n; ++i)
  {
    cin>>a[i];
  }
  int low = 0;
  int high = n-1;
  bool flag = false;

  while(low<=high){

    if(a[low]+a[high] == k){
      flag = true;
      break;
    }
    else if(a[low]+a[high] > k){
      high--;
    }
    else{
      low++;
    }
  }

  if(flag){
    cout<<"Yes\n";
  }
  else{
    cout<<"No\n";
  }
}
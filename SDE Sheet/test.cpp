#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    int arr[n];
    bool pos=false,neg=false;
    for(int i=0;i<n;i++){
      cin>>arr[i];
      if(arr[i]>0)pos=true;
      if(arr[i]<0)neg=true;
    }
    if(neg==true){
      cout<<"NO";
    }
    else{
      cout<<"YES"<<endl;
      cout<<101<<endl;
      for(int i=0;i<=100;i++){
        cout<<i<<" ";
      }
    }
    cout<<endl;
}
int32_t main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      // srand(time(0));
      int t;
      cin>>t;
      //   t=1;
      while(t--){
        // cout<<"Case #"<<tt<<": ";
            solve();
            // tt++;
      }
      return 0;
}
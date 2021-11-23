#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;
    // cout<<t<<endl;
    while(t--){
        ll n;cin>>n;
        int arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin>>arr[i];
        }
        // for (int i = 0; i < n; ++i)
        // {
        //     cout<<arr[i];
        // }
int ans = 0;
int x;
int res = INT_MAX;
        for (int i = 0; i < n; ++i)
        {

            int temp = arr[i];
            arr[i] = arr[i]^arr[i];
            for (int j=0; j < n; ++j)
            {
              ans = arr[j]; 
            }
            // cout<<"in : "<<endl;
            if(ans<res){
                x = temp;
                res =ans;
            }

            arr[i] = temp;

        }
        cout<<x<<" "<<res<<endl;

    }
}
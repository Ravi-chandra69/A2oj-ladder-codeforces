#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        // cout<<n;
        int arr[2*n];
        for (int i = 0; i <2*n; ++i)
        {
            cin>>arr[i];
        }
        // for (int i = 0; i <2n; ++i)
        // {
        //     /* code */
        // }
        int oddCt=0;
        int eveCt =0;
        for (int i = 0; i <2*n; ++i)
        {
            if(arr[i]%2==0)
                eveCt++;
            else
                oddCt++;
        }
        if(oddCt==eveCt)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
}
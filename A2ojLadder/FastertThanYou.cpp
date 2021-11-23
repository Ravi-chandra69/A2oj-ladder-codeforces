#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    double ans=0,sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    // ans=sum/n;
    cout<<setprecision(12)<<sum/n<<endl;
 
    return 0;
}
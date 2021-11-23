#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        cin>>arr[i];
    }
        
        for(int i=0;i<n;i++){
            a[i]=arr[i];
        }
        int j=0;
        int ct=0;
        for(int i=0;i<n;i++){
            if(a[i]>0){
                arr[j]=a[i];
                j++;
                ct++;
            }
        }
        
          for(int i=0;i<n;i++){
            if(a[i]>0){
                arr[ct]=a[i];
                ct++;

            }
        }
    for (int i = 0; i < n; ++i)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


}
#include <bits/stdc++.h>
using namespace std;


int main(){
    vector <int> v ={-1,-100,3,99};
    int k=2;
    vector <int> temp;

    vector <int>::iterator it;
    int j=0;
    for (auto it = v.end()-k; it!=v.end();it++)
    {
        int x;
        x= *it;
        temp.push_back(x);
    }

    for (int i = 0; i <v.size() -k ; ++i)
    {
        int x;
        x = v[i];
        temp.push_back(x);
    }

    for (int i = 0; i < temp.size(); ++i)
    {
       cout<<temp[i]<<" ";
    }
   




}
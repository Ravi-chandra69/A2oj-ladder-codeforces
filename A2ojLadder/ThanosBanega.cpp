#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int a[1005],b[1005];
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		for(int i=1;i<=n;i++)
			scanf("%d",&a[i]);
		int k=1;
		sort(a+1,a+1+n);
		for(int i=1;i<=n;i+=2){
			b[i]=a[k]; //All odd numbers are smaller than the previous number
			k++;
		}
		for(int i=2;i<=n;i+=2){
		 b[i]=a[k]; //The number in all even digits is greater than the previous number
		 k++;
		 

		 		}
			
		for(int i=1;i<=n;i++)
			printf("%d%c",b[i],i==n? '\n':' ');
	}
return 0;
}
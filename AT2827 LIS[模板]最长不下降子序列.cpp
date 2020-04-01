#include<iostream>
#include<cstdio>
using namespace std;
int n;
const int MAXN = 1e5+99;
int a[MAXN],LIS[MAXN],ans=-0x3f3f3f;

int main()
{
	for(int i=1;i<MAXN;i++)
	LIS[i]=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",a+i);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<i;j++){
			if(a[i]>a[j])
			{
				LIS[i]=max(LIS[j]+1,LIS[i]);
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		ans=max(ans,LIS[i]);
	}
	printf("%d\n",ans);
	return 0;
} 

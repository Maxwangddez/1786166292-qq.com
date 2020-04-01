#include<iostream> 
#include<cstdio>
#include<cstring>
using namespace std;
const int MAXN = 1e5 + 99;
int a[MAXN],f[MAXN],ans=-1,n;
int main()
{
	scanf("%d",&n);
	f[0]=0;
	a[0]=-0x3f;
	for(register int i=1;i<=n;i++)
	{
		scanf("%d",a+i);
	}
	for(register int i=1;i<=n;i++)
	{
		for(register int j=0;j<i;j++)
		{
			if(a[j]<=a[i])
			{
				f[i]=max(f[i],f[j]+1);
				
			}
		}
	}
	for ( register int i=1;i<=n;i++)
	{
		ans=max(ans,f[i]);
	 } 
	printf("%d\n",ans);
	return 0;
}

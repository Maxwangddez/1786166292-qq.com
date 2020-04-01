#include<iostream>
#include<cmath>
using namespace std;
const int MAXN=1e6+99;
long long bin[MAXN];
const int mod=10086001;
long long jc(long long x)
{
	//cout<<"   "<<x<<"   "<<endl;
	if(x==0)return 0;
	if(x==1)return 1;
	if(bin[x])return bin[x];
	long long tot=1;
	for(long long i=1;i<=x;i++)
	{
		tot*=i;
		tot%=mod;
	}
	return bin[x]=tot;
}
unsigned long long ans=0;
int main()
{
	int T;
	cin>>T;
	for(int u=1;u<=T;u++)
	{
		int n;
		cin>>n;
		ans=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=i;j++)
			{
				for(int k=1;k<=j;k++)
				{
					if(i-j==0)
					{
						
					}
					ans+=jc(min(abs(i-j),abs(j-k)));
					ans%=mod;
				}
			}
		}
		cout<<ans%mod<<endl;
	}
	return 0;
}

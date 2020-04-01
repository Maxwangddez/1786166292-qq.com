#include<iostream>
#include<cmath>
using namespace std;
unsigned long long a,k,ans=1;
const int MOD = 998244353 ;
int main()
{
	cin>>a>>k; 
	if(a==1)
	{
		cout<<a*k<<endl;
	}
	else
	{
		for(int i=1;i<=k+1;i++)
		{
			ans*=a;
			ans%=MOD;
		}
		cout<<(ans-a)/(a-1)<<endl;
	}
	return 0;
} 

#include<iostream>
using namespace std;
#define MAXN 205
int a[MAXN];
int main()
{
	int n;
	cin>>n;
	int num=0;
	while(n!=1)
	{
		a[num++]=n;
		if(n%2==0)n/=2;
		else
		{
			n*=3;
			++n;
		}
	}
	a[num]=1;
	for(int i=num;i>=0;i--)
	{
		cout<<a[i]<<" ";
	}
	return 0;
 } 

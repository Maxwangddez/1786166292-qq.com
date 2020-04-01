#include<iostream>
#include<cmath>
using namespace std;
struct node
{
	int chi,math,eng,tot;
};
node a[1009];
int ans=0;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].chi>>a[i].math>>a[i].eng;
		a[i].tot=a[i].chi+a[i].math+a[i].eng;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if((abs(a[i].tot-a[j].tot)<=10)
			&&(abs(a[i].chi-a[j].chi)<=5
			&&abs(a[i].math-a[j].math)<=5
			&&abs(a[i].eng-a[j].eng)<=5))
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}

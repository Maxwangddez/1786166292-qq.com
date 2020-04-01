#include<iostream>
#include<cstdio> 
#include<cmath>
using namespace std;
long double x,y,r;
long double length;
int main()
{
	scanf("%Lf%Lf%Lf",&x,&y,&r);
	printf("%.6Lf\n",abs(sqrt(x*x+y*y)-2*r));
	if(x==0&&y==0)
	{
		cout<<0<<endl;
		return 0;
	}
	if(y==0)
	{
		cout<<"Error"<<endl;
		return 0;
	}
	else
	{
		printf("%.2Lf\n",abs(x/y));
	}
	return 0;
}

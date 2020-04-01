#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[4];
	for(int i=1;i<=3;i++)
	cin>>a[i];
	sort(a+1,a+1+3);
	for(int i=1;i<=3;i++)
	cout<<a[i]<<" ";
	cout<<"\n";
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x=0,y=0,z=0,h=0;
	bool a=0,b=0;
	if(n%2==0)
	a=1;
	if(n>4&&n<=12)
	b=1;
	if(a&&b)
	x=1;
	if(a||b)
	y=1;
	if(a^b)
	z=1;
	if(!a&&!b)
	h=1;
	cout<<x<<" "<<y<<" "<<z<<" "<<h<<endl;
	return 0;
 } 

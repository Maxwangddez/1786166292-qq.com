#include<iostream>
#include<queue>
using namespace std;
priority_queue<int,vector<int>,greater<int> >q;
int main(void)
{
	int n,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		q.push(x);
	}
	while(q.size()>1)
	{
		int x=q.top();
		q.pop();
		
		x+=q.top();
		ans+=x;
		q.pop();
		q.push(x);
	}
	cout<<ans<<endl;
	return 0;
}

#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
#include<queue> 
using namespace std;
const int MAXN = 1e5 + 99;
vector<int>G[MAXN];
priority_queue<int>pq;
int n,k,tar=-0x3f,begin;
void dfs(int o,int depth,int fa){
	if(tar<depth){
		tar=depth;
		begin=o;
	}
	if(!G[o].empty()){
		for(int i=0;i<G[o].size();i++)
		{
			
			if(G[o][i]!=fa)
			dfs(G[o][i],depth+1,o);
		}
	}
} 
int main()
{
	scanf("%d%d",&n,&k);
	for(int i=1;i<n;i++)
	{
		int u,v;
		scanf("%d%d",&u,&v);
		G[u].push_back(v);
		G[v].push_back(u);
	}
	dfs(1,0,0x3f3f3f);
	tar=-0x3f;
	dfs(begin,0,0x3f3f3f);
	cout<<tar<<endl;
	return 0; 
} 
//贪心法先找离根节点最远的，再找离该节点最远的。 

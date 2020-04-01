#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<set>
using namespace std;
const int MAXN = 1e3 + 19;
struct edge{
	int u,v;
};
vector<int>G[MAXN];//存图 

queue<edge>del;//待删目录 

set<int>fa;//祖先集合 

struct uni{//并查集 
	int bin [ MAXN ];
	uni(){//初始自己是自己的祖先 
		for(int i = 0  ; i < MAXN ;i++)
		bin[i]=i;
	}
	int anc(int x)//找祖先 
	{
		if( bin[x] == x )return x;
		else return bin[x] = anc( bin[x] ); //路径压缩 
	} 
	void link( int x , int y )//认亲 
	{
		bin[ anc(x) ] = anc(y);
	}
}u;
int n;
int main()
{
	scanf("%d",&n);
	for(int i = 1 ; i < n ; i++)
	{
		int x,y;
		scanf( "%d%d" ,&x ,&y);
		
		if(u.anc(x) == u.anc(y))//如果已经在同一连通块了 
		del.push( (edge) {x,y} );//加入待删目录 
		
		else//否则 
		u.link( x , y );//正常建图 
	}
	
	for(int i = 1 ; i <= n ; i++)
	{
		int x = u.anc(i);//找各个点的祖先 
		fa.insert(x);//加入集合（去重） 
	}
		
	cout << fa.size()-1 << endl;//集合的大小-1就是需要连的边数 
	
	if(fa.size()!=1)//如果未完全联通 
	{
		set<int>::iterator it=fa.begin();//取第一个祖先 
		int root = *it;
		
		fa.erase(root);//删掉所取的祖先 
		
		for(set<int>::iterator it=fa.begin();it!=fa.end();it++)//遍历其他祖先 
		{
			edge key = del.front();
			del.pop();//从待删目录里取边 
			
			printf("%d %d %d %d\n",key.u,key.v,root,*it);//输出 
		}
	}
	puts("");//好习惯 
	return 0;
} 

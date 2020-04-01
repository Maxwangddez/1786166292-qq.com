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
vector<int>G[MAXN];//��ͼ 

queue<edge>del;//��ɾĿ¼ 

set<int>fa;//���ȼ��� 

struct uni{//���鼯 
	int bin [ MAXN ];
	uni(){//��ʼ�Լ����Լ������� 
		for(int i = 0  ; i < MAXN ;i++)
		bin[i]=i;
	}
	int anc(int x)//������ 
	{
		if( bin[x] == x )return x;
		else return bin[x] = anc( bin[x] ); //·��ѹ�� 
	} 
	void link( int x , int y )//���� 
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
		
		if(u.anc(x) == u.anc(y))//����Ѿ���ͬһ��ͨ���� 
		del.push( (edge) {x,y} );//�����ɾĿ¼ 
		
		else//���� 
		u.link( x , y );//������ͼ 
	}
	
	for(int i = 1 ; i <= n ; i++)
	{
		int x = u.anc(i);//�Ҹ���������� 
		fa.insert(x);//���뼯�ϣ�ȥ�أ� 
	}
		
	cout << fa.size()-1 << endl;//���ϵĴ�С-1������Ҫ���ı��� 
	
	if(fa.size()!=1)//���δ��ȫ��ͨ 
	{
		set<int>::iterator it=fa.begin();//ȡ��һ������ 
		int root = *it;
		
		fa.erase(root);//ɾ����ȡ������ 
		
		for(set<int>::iterator it=fa.begin();it!=fa.end();it++)//������������ 
		{
			edge key = del.front();
			del.pop();//�Ӵ�ɾĿ¼��ȡ�� 
			
			printf("%d %d %d %d\n",key.u,key.v,root,*it);//��� 
		}
	}
	puts("");//��ϰ�� 
	return 0;
} 

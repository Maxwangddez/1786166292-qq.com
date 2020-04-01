//归并排序
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int n;

const int MAXN = 1e5 + 99;
int a[MAXN];

#define rint register int
#define isnum(x) ( '0' <= (x) && (x) <= '9' )
template<typename tint> 
inline void read(tint& x)
{
	int f = 1;char ch = getchar(); x = 0;
	for(;!isnum(ch);ch=getchar())if(ch == '-')f = -1;
	for(;isnum(ch);ch=getchar())x = x * 10 + ch - '0';
	x *= f; 
}

void qsort(int l,int r)
{
	cout<<"l:"<<l<<" r:"<<r<<endl;
	if(l==r)
	return;
	if(l+1 == r)
	{
		if(a[r]<a[l])
		swap(a[l],a[r]);//排序 
		return;
	}
	
	int mid = (l + r) / 2;
	qsort(l,mid);
	
	qsort(mid+1,r);//拆分 
	
	//合并
	int i=l,j=mid+1,k=l-1;
	while(k<=r)
	{
		if(i > mid && j <= r)//i取完 
		{
			a[ ++k ] = a[ j++ ];
		}
		if(i <= mid && j > r)
		{
			a[ ++k ] = a[ i++ ];
		}
		if(i <= mid && j <= r)
		{
			if(a[i] > a[j])
			{
				a[++k] = a[j++];
			}
			else
			{
				a[++k] = a[i++];
			}
		}
	}
	return;
}



int main()
{
	read(n);
	for(rint i=1;i<=n;++i)
	{
		read(a[i]);
	}
	qsort(1,n);
	for(rint i=1;i<=n;++i)
	{
		printf("%d ",a[i]);
	}
	return 0;
} 

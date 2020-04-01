#include<iostream>
#include<cstdio>
#include<cmath>//fmod要调用math库 
using namespace std;
double l , d , v , g , r;//分别为A与B间的距离（米），A与红绿灯的距离，车的速度，绿灯的持续时间和红灯的持续时间
double t;//到红绿灯所用的时间 
int main()
{
	scanf( "%lf%lf%lf%lf%lf" ,&l ,&d ,&v ,&g ,&r);//
	
	t = d/v;//算出红灯前的时间 
	
	t = fmod( t , 0 );//调用fmod函数求double类型的余数 
	//求剩下的时间
	 
	if( t < g )//是绿灯 
	t = 0;//不用等 
	
	else//否则 
	t = g+r-t;// 把剩余的时间等完 
	
	printf( "%.8lf\n" ,l/v+t );//总时间是跑路的时间和等红灯的时间之和 
	return 0;
} 

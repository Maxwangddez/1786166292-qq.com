#include<iostream>
#include<cstdio>
#include<cmath>//fmodҪ����math�� 
using namespace std;
double l , d , v , g , r;//�ֱ�ΪA��B��ľ��루�ף���A����̵Ƶľ��룬�����ٶȣ��̵Ƶĳ���ʱ��ͺ�Ƶĳ���ʱ��
double t;//�����̵����õ�ʱ�� 
int main()
{
	scanf( "%lf%lf%lf%lf%lf" ,&l ,&d ,&v ,&g ,&r);//
	
	t = d/v;//������ǰ��ʱ�� 
	
	t = fmod( t , 0 );//����fmod������double���͵����� 
	//��ʣ�µ�ʱ��
	 
	if( t < g )//���̵� 
	t = 0;//���õ� 
	
	else//���� 
	t = g+r-t;// ��ʣ���ʱ����� 
	
	printf( "%.8lf\n" ,l/v+t );//��ʱ������·��ʱ��͵Ⱥ�Ƶ�ʱ��֮�� 
	return 0;
} 

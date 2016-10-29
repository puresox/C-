#include<stdio.h>
int main()
{
	int a,b,c,*d,*p1,*p2,*p3;
	printf("请输入三个整数\n");
	scanf("%d%d%d",&a,&b,&c);
	p1=&a;
	p2=&b;
	p3=&c;
	if(*p1>*p2)
	{
		d=p1;
		p1=p2;
		p2=d;
	}
	if(*p1>*p3)
	{
		d=p1;
		p1=p3;
		p3=d;
	}
	if(*p2>*p3)
	{
		d=p2;
		p2=p3;
		p3=d;
	}
	printf("%d\n%d\n%d\n",*p1,*p2,*p3);
	return 0;
}
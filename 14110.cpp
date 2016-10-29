#include<stdio.h>
int main()
{
	float a,b,c,d,x;
	a=2.0;
	b=1.0;
	x=2.0;
	d=1.0;
	while(d<20)
	{
		x=x+(a+b)/a;
		c=a;
		a=a+b;
		b=c;
		d=d+1;
	}
	printf("%f\n",x);
	return 0;
}
		


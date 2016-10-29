#include<stdio.h>
int main()
{
	int a,b,c,x,y;
	x=100;
	while(x<1000)
	{
		a=x/100;
	    b=(x-a*100)/10;
	    c=x%10;
		y=a*a*a+b*b*b+c*c*c;
		if(x==y)
			printf("%d\n",x);
	    x=x+1;
	}
	return 0;
}
		


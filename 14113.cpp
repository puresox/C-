#include<stdio.h>
#include<math.h>
int main()
{
	double a,x,y;
	printf("������һ����\n");
	scanf("%lf",&a);
	x=1.0;
	for(x=1;;)
	{
		y=x;
		x=(x+a/x)/2.0;
		if(x-y<0.00001&&x-y>-0.00001)
		{
			break;
		}
	}
	printf("%f\n",x);
	return 0;
}


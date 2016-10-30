#include<stdio.h>
int main()
{
	int a;
	void zfc(int x);
	printf("ÇëÊäÈëÕûÊý\n");
	scanf("%d",&a);
	zfc(a);
	return 0;
}
void zfc(int x)
{
	int i;
	if(x/10!=0)
	{
		i=x/10;
		zfc(i);
	}
	putchar('0'+x%10);
}

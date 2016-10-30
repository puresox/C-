#include<stdio.h>
int main()
{
	int a;
	void zfc(int x);
	printf("请输入整数\n");
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
	putchar(48+x%10);
}

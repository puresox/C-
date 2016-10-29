#include <stdio.h>
int main()
{
	int m,n;
   int jiechen(int x);
	printf("请输入一个数字,求n!\n");
	scanf("%d", &n);
   m=jiechen(n);
	printf("n!=%d\n",m);
	return 0;
}

int jiechen(int x)
{
	int y;
   if(x==1)
   {
	   y=1;
   }
   else
   {
	   y=jiechen(x-1)*x;
   }
   return y;
}
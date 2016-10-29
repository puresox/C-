#include<time.h>
#include<stdio.h>
int main()
{
	int a,b;
	time_t start,end;
	int cost;
	printf("按1开始计时\n");
	scanf("%d",&a);
	if(a==1)
	{
		start=time(NULL);
	}
	printf("按0计时结束\n");
	scanf("%d",&b);
	if(b==0)
	{
		end=time(NULL);
	}
	cost=difftime(end,start);
	printf("%d\n",cost);
	printf("%ld",start);
	return 0;
}
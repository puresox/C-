#include<time.h>
#include<stdio.h>
int main()
{
	int a,b;
	time_t start,end;
	int cost;
	printf("��1��ʼ��ʱ\n");
	scanf("%d",&a);
	if(a==1)
	{
		start=time(NULL);
	}
	printf("��0��ʱ����\n");
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
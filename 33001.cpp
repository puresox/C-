#include<stdio.h>
int last(int a,int b,int c)
{
	int d=0,i;                                              
	int e1[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int e2[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(a%4==0&&a%400!=0||a%100==0&&a%400!=0)             //run nian
	{
		for(i=1;i<=b-1;i++)
		{
			d+=e1[i];
		}
		d+=c;
	}
	else
	{
		for(i=1;i<=b-1;i++)
		{
			d+=e2[i];
		}
		d+=c;
	}
	return(d);
}
int main()
{
	int last(int a,int b,int c);
	int x,y,z;
	printf("请输入年=\n");                      
	scanf("%d",&x);
	printf("请输入月=\n");                     
	scanf("%d",&y);
	printf("请输入日=\n");                   
	scanf("%d",&z);
	printf("今天是这一年的第%d天\n",last(x,y,z));
	return 0;
}
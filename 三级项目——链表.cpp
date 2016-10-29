#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<time.h>
struct shu//声明结构体   全局变量
{
	int num;
	struct shu * next;
};
/**************************/
int main()//主函数
{
	int leftone(int x);//声明函数
	int i,j,a;
   printf("幸运游戏\n\n规则：给出1到2016这2016个数，随机给出两个数num1,num2，请选择一个数记为num，从1开始数，数到num个数就去掉这个数接着数，2016个数首尾相接，使最后剩下的1个数大\n");
	for(j=1;;j++)//循环：可以一直玩下去，直到满足退出条件
	{
		printf("第%d题\n",j);
		int random[2];//产生2个随机数
		srand(time(0));
		for(i=0;i<=1;i++)
		{
			random[i]=rand()%1901+100;//随机数范围是100到2000
		}
		printf("请选择   %d   或   %d   \n若输入其他数则会退出\n",random[0],random[1]);
		scanf("%d",&a);
		if(a==random[0])//判断结果，给出反馈
		{
			if( leftone(random[0])>=leftone(random[1]) )
				printf("您选择的结果为%d\n另一个为%d\n恭喜您选择正确\n\n\n", leftone(random[0]), leftone(random[1]));
			else
				printf("您选择的结果为%d\n另一个为%d\n可惜，选择错误\n\n\n", leftone(random[0]), leftone(random[1]));
			continue;
		}
		else if(a==random[1])
		{
			if( leftone(random[1])>=leftone(random[0]) )
				printf("您选择的结果为%d\n另一个为%d\n恭喜您选择正确\n\n\n", leftone(random[1]), leftone(random[0]));
			else
				printf("您选择的结果为%d\n另一个为%d\n可惜，选择错误\n\n\n", leftone(random[1]), leftone(random[0]));
			continue;
		}
		else//否则退出
			break;
	}
	return 0;
}
/***************************/
int leftone(int x)//函数：计算最后一个数的数值
{
	int i,j;
	struct shu * p1, * p2, * head;
	p1=(struct shu *)malloc(sizeof(struct shu));//把2016个数连起来
	head=(struct shu *)malloc(sizeof(struct shu));
	head->next=p1;
	for(i=1;i<=2016;i++)
	{
		p1->num=i;
		if(i==2016)//首尾相连
		{
			p1->next=head->next;
		}
		else
		{
			p2=(struct shu *)malloc(sizeof(struct shu));
			p1->next=p2;
			p1=p2;
		}
	}
	p1=head;
	for(i=1;i<=2015;i++)//循环删除操作2015次，得到最后一个数
	{
		for(j=1;j<=x-1;j++)//搜索需要删除的数
		{
			p1=p1->next;
		}
		p2=p1->next;//删除
		p1->next=p2->next;
	   free(p2);
	}
	return(p1->num);//返回结果
}


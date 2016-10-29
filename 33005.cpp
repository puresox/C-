#include<stdio.h>
int main()
{
	int i,x=0;
	float G1=0,G2=0,G3=0,A[5];
	struct chenji
	{
		float g1;
		float g2;
		float g3;
	}score;
	struct student
	{
		int id;
		char name[20];
		struct chenji score;
	}a[5];
	for(i=0;i<5;i++)
	{
		printf("请输入第%d学生的学号，姓名，三门课目的成绩\n",(i+1));
		scanf("%d%s%f%f%f",&a[i].id,a[i].name,&a[i].score.g1,&a[i].score.g2,&a[i].score.g3);
	}
	for(i=0;i<5;i++)
	{
		G1=G1+a[i].score.g1;
		G2=G2+a[i].score.g2;
		G3=G3+a[i].score.g3;
	}
	printf("\n三门课目总平均成绩分别为%f %f %f\n",(G1/5),(G2/5),(G3/5));
	for(i=0;i<4;i++)
	{
		A[i]=a[i].score.g1+a[i].score.g2+a[i].score.g3;
	}
	for(i=1;i<4;i++)
	{
		if(A[x]<A[i])
			x=i;
	}
	printf("分数最高的学生\n学号:%d\n姓名:%s\n分数分别为%f %f %f\n",a[x].id,a[x].name,a[x].score.g1,a[x].score.g2,a[x].score.g3);
	return 0;
}
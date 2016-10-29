#include<stdio.h>
#include<malloc.h>
struct student
{
	int num;
	char name[20];
	int score[3];
};
int main()
{
	printf("请输入学号，姓名，三门课成绩");
	scanf("%d %s %d %d %d");
	return 0;
}
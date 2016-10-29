#include<stdio.h>
#include<malloc.h>
int main()
{
	struct student
	{
		int num;
		char name[20];
		char sex;
		int age;
		struct student * next;
	};
	int a,i;
	struct student * head, * p, * q;
	struct student stu[6]={{001,"liuyuchao",'m',18},{002,"liuqi",'m',19},{003,"xiongximin",'m',19},{004,"liannan",'m',20},{005,"likehang",'m',20},{006,"yangzhensi",'m',21}};
	head->next=&stu[0];
	p=&stu[5];
	p->next=NULL;
	for(i=0;i<=4;i++)
	{
		p=&stu[i];
		p->next=&stu[i+1];
	}
	printf("«Î ‰»ÎƒÍ¡‰");
	scanf("%d",&a);
	p=head;
	q=&stu[0];
	for(i=0;i<=5;i++)
	{
		if(q->age==a)
		{
			p->next=q->next;
			q=q->next;
		}
		else
		{
			p=q;
			q=q->next;
		}
	}
	p=head->next;
	for(i=0;;i++)
	{
		if(p==NULL)
			break;
	}
	return 0;
}
#include<stdio.h>
#include<malloc.h>
int main()
{
	struct student 
	{
		int num;
		struct student * next;
	};
	int i;
	struct student * p, * q, * head;
	p=(struct student * )malloc(sizeof(struct student));
	head=p;
	p->num=1;
	for(i=2;i<=13;i++)
	{
		q=(struct student * )malloc(sizeof(struct student));
		q->num=i;
		p->next=q;
		p=q;
	}
	p->next=head;
	p=head;
	for(i=1;i<=12;i++)
	{
		q=p->next->next;
		p=p->next;
		p->next=q->next;
		p=p->next;
		free(q);
	}
	printf("%d\n",p->num);
	return 0;
}


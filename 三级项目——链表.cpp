#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<time.h>
struct shu//�����ṹ��   ȫ�ֱ���
{
	int num;
	struct shu * next;
};
/**************************/
int main()//������
{
	int leftone(int x);//��������
	int i,j,a;
   printf("������Ϸ\n\n���򣺸���1��2016��2016�������������������num1,num2����ѡ��һ������Ϊnum����1��ʼ��������num������ȥ���������������2016������β��ӣ�ʹ���ʣ�µ�1������\n");
	for(j=1;;j++)//ѭ��������һֱ����ȥ��ֱ�������˳�����
	{
		printf("��%d��\n",j);
		int random[2];//����2�������
		srand(time(0));
		for(i=0;i<=1;i++)
		{
			random[i]=rand()%1901+100;//�������Χ��100��2000
		}
		printf("��ѡ��   %d   ��   %d   \n����������������˳�\n",random[0],random[1]);
		scanf("%d",&a);
		if(a==random[0])//�жϽ������������
		{
			if( leftone(random[0])>=leftone(random[1]) )
				printf("��ѡ��Ľ��Ϊ%d\n��һ��Ϊ%d\n��ϲ��ѡ����ȷ\n\n\n", leftone(random[0]), leftone(random[1]));
			else
				printf("��ѡ��Ľ��Ϊ%d\n��һ��Ϊ%d\n��ϧ��ѡ�����\n\n\n", leftone(random[0]), leftone(random[1]));
			continue;
		}
		else if(a==random[1])
		{
			if( leftone(random[1])>=leftone(random[0]) )
				printf("��ѡ��Ľ��Ϊ%d\n��һ��Ϊ%d\n��ϲ��ѡ����ȷ\n\n\n", leftone(random[1]), leftone(random[0]));
			else
				printf("��ѡ��Ľ��Ϊ%d\n��һ��Ϊ%d\n��ϧ��ѡ�����\n\n\n", leftone(random[1]), leftone(random[0]));
			continue;
		}
		else//�����˳�
			break;
	}
	return 0;
}
/***************************/
int leftone(int x)//�������������һ��������ֵ
{
	int i,j;
	struct shu * p1, * p2, * head;
	p1=(struct shu *)malloc(sizeof(struct shu));//��2016����������
	head=(struct shu *)malloc(sizeof(struct shu));
	head->next=p1;
	for(i=1;i<=2016;i++)
	{
		p1->num=i;
		if(i==2016)//��β����
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
	for(i=1;i<=2015;i++)//ѭ��ɾ������2015�Σ��õ����һ����
	{
		for(j=1;j<=x-1;j++)//������Ҫɾ������
		{
			p1=p1->next;
		}
		p2=p1->next;//ɾ��
		p1->next=p2->next;
	   free(p2);
	}
	return(p1->num);//���ؽ��
}


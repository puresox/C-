/*******************************************************************************
������
2015.11.03
*******************************************************************************/
#include<stdio.h>
#include<string.h>
int main()
{
	int i,x,y;
	char a[100],b[100];
	printf("�������ַ���a\n");
	scanf("%s",a);
	printf("�������ַ���b\n");
	scanf("%s",b);
	x=strlen(a);
	y=strlen(b);
	for(i=0;i<=y;i++)
	{
		a[x+i]=b[i];
	}
	printf("\n%s\n",a);
	return 0;
}



#include<stdio.h>
int main()
{
	int scmp(char *p1,char *p2);
	char*p1,*p2,s1[100],s2[100];
	printf("请输入一个字符串s1\n");
	gets(s1);
	printf("请输入一个字符串s2\n");
	gets(s2);
	p1=s1;
	p2=s2;
	printf("%d\n",scmp(p1,p2));
	return 0;
}

int scmp(char*p1,char*p2)
{
	int i,x;
	for(i=0;i<=100;i++)
	{
		x=*(p1+i)-*(p2+i);
		if(*(p1+i)=='\0'&&*(p2+i)=='\0')
			return 0;
		if(x==0)
			continue;
		else
		{
			return(x);
			break;
		}
	}
}
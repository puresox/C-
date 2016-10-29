#include<stdio.h>
#include<string.h>
char b[100][100];
int main()
{
	void daoxu(int m,int p);
	int x=0,y=0,i,j;
	char a[100];
	printf("«Î ‰»Î\n");
	gets(a);
	for(i=0;;i++)
	{
		if(a[i]==32)
		{
			b[x][y]='\0';
			x++;
			y=0;
			continue;
		}
		if(a[i]=='\0')
		{
			b[x][y]='\0';
			break;
		}
		b[x][y]=a[i];
		y++;
	}
	for(j=0;j<=x;j++)
	{
		daoxu(j,0);
		printf(" ");
	}
	printf("\n");
	return 0;
}

void daoxu(int m,int p)
{
	int q;
	q=p+1;
	if(b[m][q]!='\0')
		daoxu(m,q);
	printf("%c",b[m][p]);
}
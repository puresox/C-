#include<stdio.h>
int main()
{
	char a[]={"* * * * *"};
	int m,n;
	for(m=1;m<=5;m++)
	{
		for(n=0;n<=2*(m-1);n++)
		{
			printf(" ");
		}
		puts(a);
		printf("\n");
	}
	return 0;
}
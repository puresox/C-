#include<stdio.h>
#include<math.h>
int main()
{
	int m,n,a,b;
	printf("n=");
	scanf("%d",&n);
	if(n%2==1)
	{
		for(m=1;m<=n;m++)
		{
			if(m<=(n+1)/2)
			{
				for(a=1;a<=(n+1)/2-m;a++)
				{
					printf(" ");
				}
				for(b=1;b<=2*m-1;b++)
				{
					printf("*");
				}
			}
			else
			{
				for(a=1;a<=m-(n+1)/2;a++)
				{
					printf(" ");
				}
				for(b=1;b<=2*(n-m+1)-1;b++)
				{
					printf("*");
				}
			}
			printf("\n");
		}
	}
	else
	{
		for(m=1;m<=n;m++)
		{
			if(m<=n/2)
			{
				for(a=1;a<=n/2-m;a++)
				{
					printf(" ");
				}
				for(b=1;b<=2*m-1;b++)
				{
					printf("*");
				}
			}
			else
			{
				for(a=1;a<=m-n/2-1;a++)
				{
					printf(" ");
				}
				for(b=1;b<=2*(n-m+1)-1;b++)
				{
					printf("*");
				}
			}
			printf("\n");
		}
	}
	return 0;
}
				

		
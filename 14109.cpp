#include<stdio.h>
int main()
{
	int a,b,c,d;
	for(a=1;a<=1000;a++)                             //a wanshu
	{
		for(b=1,c=0;b<a;b++)                         //b yingzi
		{
			d=a%b;
           if(d==0)                                  //c he
			{

				c=c+b;
			}
		}
		if(a==c)
		{
			printf("%d its factors are ",a);
			for(b=1,c=0;b<a;b++)                      //b yingzi
			{
			if(a%b==0)                                //c he
			{

				printf("%d ",b);
			
			}
			}
			printf("\n");
		}
		
	}
	return 0;
}




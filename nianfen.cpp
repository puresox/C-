/*****************************************************************************
2015.10.27
刘禹超
*****************************************************************************/
#include<stdio.h>
int main()
{
	int a,b,c,d,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12;
	printf("请输入年=\n");                      //a   nian
	scanf("%d",&a);
	printf("请输入月=\n");                      //b   yue
	scanf("%d",&b);
	printf("请输入日=\n");                      //c   ri
	scanf("%d",&c);
	if(a%4==0&&a%400!=0||a%100==0&&a%400!=0)
	{
		printf("今年是闰年\n");
		    c1=31;
			c2=29;
			c3=31;
			c4=30;
			c5=31;
			c6=30;
			c7=31;
			c8=31;
			c9=30;
			c10=31;
			c11=30;
			c12=31;
			switch(b)
		{
    case 1:d=c12+c11+c10+c9+c8+c7+c6+c5+c4+c3+c2+c1-c+1;break;
	case 2:d=c12+c11+c10+c9+c8+c7+c6+c5+c4+c3+c2-c+1;break;
	case 3:d=c12+c11+c10+c9+c8+c7+c6+c5+c4+c3-c+1;break;
	case 4:d=c12+c11+c10+c9+c8+c7+c6+c5+c4-c+1;break;
	case 5:d=c12+c11+c10+c9+c8+c7+c6+c5-c+1;break;
	case 6:d=c12+c11+c10+c9+c8+c7+c6-c+1;break;
	case 7:d=c12+c11+c10+c9+c8+c7-c+1;break;
	case 8:d=c12+c11+c10+c9+c8-c+1;break;
	case 9:d=c12+c11+c10+c9-c+1;break;
	case 10:d=c12+c11+c10-c+1;break;
	case 11:d=c12+c11-c+1;break;
	case 12:d=c12-c+1;break;
		}
	printf("距离今年结束还有%d\n",d);
	}
	else 
	{
		printf("今年是平年\n");
			c1=31;
			c2=28;
			c3=31;
			c4=30;
			c5=31;
			c6=30;
			c7=31;
			c8=31;
			c9=30;
			c10=31;
			c11=30;
			c12=31;
			switch(b)
		{
    case 1:d=c12+c11+c10+c9+c8+c7+c6+c5+c4+c3+c2+c1-c+1;break;
	case 2:d=c12+c11+c10+c9+c8+c7+c6+c5+c4+c3+c2-c+1;break;
	case 3:d=c12+c11+c10+c9+c8+c7+c6+c5+c4+c3-c+1;break;
	case 4:d=c12+c11+c10+c9+c8+c7+c6+c5+c4-c+1;break;
	case 5:d=c12+c11+c10+c9+c8+c7+c6+c5-c+1;break;
	case 6:d=c12+c11+c10+c9+c8+c7+c6-c+1;break;
	case 7:d=c12+c11+c10+c9+c8+c7-c+1;break;
	case 8:d=c12+c11+c10+c9+c8-c+1;break;
	case 9:d=c12+c11+c10+c9-c+1;break;
	case 10:d=c12+c11+c10-c+1;break;
	case 11:d=c12+c11-c+1;break;
	case 12:d=c12-c+1;break;
		}
	printf("距离今年结束还有%d\n",d);
	}

	return 0;
}

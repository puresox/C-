#include<stdio.h>
int main()
{
	int i,k;
	float j,y1,y2,y3,y4,y5;
	scanf("%d",&i);
	y1=100000*0.1;
	y2=y1+100000*0.075;
	y3=y2+200000*0.05;
	y4=y3+200000*0.03;
	y5=y4+400000*0.015;
	if(i<1000000)
		k=i/100000;
	else
		k=10;
	switch(k)
	{
	case 0:j=i*0.1;break;
	case 1:j=y1+(i-100000)*0.075;break;
	case 2:
	case 3:j=y2+(i-200000)*0.05;break;
	case 4:
	case 5:j=y3+(i-400000)*0.03;break;
	case 6:
	case 7:
	case 8:
	case 9:j=y4+(i-600000)*0.015;break;
	case 10:j=y5+(i-1000000)*0.01;break;
	}
	printf("%f\n",j);
	return 0;
}

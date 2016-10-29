#include<stdio.h>
int main()
{
	int a,b,n,t,s;
	scanf("%d",&n);
	a=1;
	b=a;
	s=a;
	t=1;
	while(t<n)
	{
		b=10*b+a;
		s=s+b;
		t=t+1;
	}
	printf("%d\n",s);
	return 0;
}


#include <stdio.h>
int main()
{
	int i,x=0;
	char a[20];
	printf("ÄãºÃ!ÇëÊäÈë1´®Êı×Ö!\n");
	scanf("%s",a);
   for(i=0;i<=19;i++)
   {
	   if(a[i]=='\0')
	       break;
	   else if(a[i+1]==a[i])
	      continue;
	   else 
	   {
			 printf("%d%c",i+1-x,a[i]);
		    x=i+1;
		}
	}
	return 0;
}
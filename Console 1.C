#include <stdio.h>
int main()
{
	int x,y=0,i,j;
   scanf("%d",&x);
   for(i=0;;i++)
   {
	   for(j=0;;j++)
	  {
		 if(x<1)
	      break;
		 y=y+x%10;
	    x=x/10;
	  }
	   if(y<10)
	  {
	      printf("%d",y);
		   break;
     }
	   else 
	  {
		 x=y;
	   y=0;
	 }
	    
	}
	return 0;
}




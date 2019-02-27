#include<stdio.h>
void main()
{
 int i;
 printf("12 midnight\n");
 for(i=1;i<=11;i++)
	{ 
	  printf("%dAM\n",i);
	}
 printf("12noon\n");
 for(i=1;i<=11;i++)
	{
	 printf("%dPM\n",i);
	}
}

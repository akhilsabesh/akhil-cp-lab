#include<stdio.h>
void main()
{
  int i,j,lim;
  printf("enter the limit of pattern");
  scanf("%d",&lim);
  for(i=lim;i>0;i--)
     {
	for(j=i;j>0;j--)
		{
 		   printf("*");
               }
	printf("\n");
}
}

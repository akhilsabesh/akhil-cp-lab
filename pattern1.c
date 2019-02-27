#include<stdio.h>
void main()
{
  int i,j,lim;
  printf("enter the limit of pattern");
  scanf("%d",&lim);
  for(i=1;i<=lim;i++)
     {
	for(j=1;j<i;j++)
		{
 		   printf("%d",j);
               }
	printf("\n");
}
}

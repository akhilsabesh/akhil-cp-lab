#include<stdio.h>
void main()
{
 int num,oct,rem,c;
printf("enter the umber");
scanf("%d",&num);
rem=num%8;
c=num/8;
oct=(c*10)+rem;
printf("%d\n",oct);
}  

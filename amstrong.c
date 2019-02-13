#include<stdio.h>
void main()
{
 int num,a,rem,sum=0;
 printf("enter the number:");
 scanf("%d",&num);
 a=num;
 while (num>0)
	{
	  rem=num%10;
	  sum=sum+rem*rem*rem;
	  num=num/10;
	  }
if(sum==a)
    {
	printf("the number is amstrong");
    }
else
    {
	printf("the number is not amstrog");
     }	
}

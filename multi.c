#include<stdio.h> 
void main()
{
 int n,i,lim,multi;
 printf("enter the number");
 scanf("%d",&n);
 printf("enter the limit");
 scanf("%d",&lim);
 printf("multiplication table of %d=\n",n);
for(i=1;i<=lim;i++)
  {
    multi=n*i;

    printf("%d*%d=%d\n",n,i,multi);
  }
}

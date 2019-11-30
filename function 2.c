#include<stdio.h>
main()
{
   int num;

   printf("enter int num:");
   scanf("%d",&num);
   int result=squre(num);
   printf("%d",result);
}
int squre(int a)

{
   return a*a;
}

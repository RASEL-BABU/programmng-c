#include<stdio.h>
main()
{
   int year;
   printf("Enter The Year");
   scanf("%d",&year);
   if(year%400==0)
      printf("Leap Year\n");
   else if(year%400==0)
      printf("Not Leap Year\n");
   else if(year%4==0)
      printf("Leap year\n");
   else
      printf("not leap year\n");
}

#include<stdio.h>
main()
{
   int n,i;
   float a[100],sum=0,avarage;
   printf("enter the number");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      printf("%d. enter the number",i+1);
      scanf("%f",&a[i]);
      sum=sum+a[i];

   }
   avarage=sum/n;
   printf("avarge=%.2f",avarage);
   return 0;
}

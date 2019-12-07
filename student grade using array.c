#include<stdio.h>
main()
{
   int i,n;
   float marks[100],avarage,sum=0;
   printf("Enter The Number of Subjects:");
   scanf("%d",&n);
   printf("Enter The Marks Of Subject:");
   for(i=0;i<n;i++)
   {
      scanf("%d",&marks[i]);
      sum=sum+marks[i];
   }
   avarage=sum/n;
   printf("The Grade of student:");
   if(avarage>100||avarage<0)
   {
      printf("Invalid Marks\n");
      printf("Enter Again:");}
      else if(avarage>=80&&avarage<100)
         printf("A+");
      else if(avarage>=70&&avarage<79)
         printf("A");
      else if(avarage>=60&&avarage<69)
         printf("A-");
      else if(avarage>=50&&avarage<59)
         printf("B");
   else if(avarage>=40&&avarage<49)
         printf("C");
      else if(avarage>=33&&avarage<39)
         printf("D");
         else
            printf("Fail");


}

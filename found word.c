#include<stdio.h>
main()
{
   char s[80],t;
   int i ,l,n,p;
   printf("enter the sentenmce");
   gets(s);
   printf("Which word");
   scanf("%s",&t);
int   length=strlen(s);
   p=-1;
   for(i=0;i<length;i++)
      if(s[i]==t)
      p=i;
      if(p==-1)
         printf("Not found");
      else
         printf("the position is ::%d",p);



}

#include<stdio.h>
main()
{
   int n ,length;
   char s[100];
   gets(s);
   length=strlen(s);
   printf("the total charcter of string: %d",length);
   printf("Which Position");
   scanf("%d",&n);
   if(n<length)
      printf("The word is :%c",s[n]);
   else
      printf("Not found");

}

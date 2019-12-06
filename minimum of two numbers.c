#include<stdio.h>
int main()
{
int a,b,c,min;
printf("enter the value:");
scanf("%d%d%d",&a,&b,&c);
min=a;
if (min>b)
{
   min=b;
}
if(min>c)
{
   min=c;
}
printf("the minimum is:%d",min);
return 0;

}


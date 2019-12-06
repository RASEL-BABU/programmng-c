#include<stdio.h>
main()
{
    int a,b;
    printf("enter integer number");
    scanf("%d%d",&a,&b);
    int result=sum(a,b);
    printf("sum%d\n",result);


}
      int sum(int a,int b)
      {


      return a+b;
}

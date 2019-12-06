#include<stdio.h>
main(){
int n,first=0,second=1,count=0,fibo;
printf("enter the number:");
scanf("%d",&n);
while(count<n){
      if(count<=1)
      {
         fibo=count;
      }
      else{
            fibo=first+second;
      first=second;
      second=fibo;
      }

printf("%d\n ",fibo);
count++;
}


}

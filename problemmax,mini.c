#include<stdio.h>
 main()
 {
int num[100],n,i,
 min,max;
printf("how many number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&num[i]);

}
max=num[0];
min=num[0];
for(i=1;i<n;i++)
{
    if(max<num[i])
        max=num[i];
}
for(i=1;i<n;i++){
if(min>num[i])
{
    min=num[i];
}
 }


printf("maximum%d",max);
printf("minimum%d",min);

}









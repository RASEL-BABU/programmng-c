#include<stdio.h>
main()
{
     int a[10],b[10],i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0,j=0;i<n;i++,j++)
    {
        b[j]=a[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
}

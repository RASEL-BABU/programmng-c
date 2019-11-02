#include<stdio.h>
main()
{
    int arr[100],i,num;
    printf("size the array");
    scanf("%d",&num);
    printf("enter the elements");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("even numbers");
    for(i=0;i<num;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d",arr[i]);
        }
    }
    printf("odd numbers");
    for(i=0;i<num;i++)
    {
        if(arr[i]%2==1)
        {
            printf("%d",arr[i]);
        }
    }
    return 0;
}

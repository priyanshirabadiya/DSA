#include<stdio.h>
int main()
{
    int a[6],i;
    for(i=0;i<5;i++)
    {
        printf("enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for(i=1;i<=5;i++)
    {

        a[5]=0;
        a[5]=a[0];
        printf("%d ",a[i]);
    }
    return 0;
}
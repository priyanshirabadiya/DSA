#include<stdio.h>
int main()
{
    int n,m,k;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter m:");
    scanf("%d",&m);
    int a[n],b[m],c[m+n],i;
    for(i=0;i<n;i++)
    {
        printf("enter element of 1 array:");
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    k=i;
    for(i=0;i<m;i++)
    {
        printf("enter element of 2 array:");
        scanf("%d",&b[i]);
        c[k++]=b[i];
    }
    printf("after merge\n");
    for(i=0;i<k;i++)
    {
        printf("%d \t",c[i]);
    }
}
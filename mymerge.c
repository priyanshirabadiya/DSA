#include<stdio.h>
int main()
{
    int m,n,k;
    printf("enter element of m:");
    scanf("%d",&m);
    printf("enter element of n:");
    scanf("%d",&n);
    int a[m],b[n],c[m+n],i;
    for(i=0;i<m;i++)
    {
        printf("enter element of 1 array:");
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
k=i;
for(i=0;i<n;i++)
{
    printf("enter element of 2 array:");
    scanf("%d",&a[i]);
        c[k++]=a[i];
}
for(i=0;i<k;i++)
{
    printf("%d ",c[i]);
}
}
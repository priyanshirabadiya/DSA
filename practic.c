#include<stdio.h>
#define n 5
int f=-1,r=-1;
int a[n];
int display()
{
    int i;
    if(f<0)
       printf("Queue is empty:\n");
    else
    {
    for(i=f;i<=r;i++)
    {
        printf("%d ",a[i]);
    }
    }
    printf("\n");
}
int intsert(int val)
{
    if(r>=n-1)
        printf("Queue is full\n ");
    else if(r<0)
    {
        f = r =0;
        a[r]=val;
    }
    else  
    {
        r++;
        a[r]=val;
    }
}
int finsert(int val)
{
    if(f<0)
    {
        f=r=0;
        a[f]=val;
    }
else if(f==0)
printf("Not number added\n");
else
{
        f--;
        a[f]=val;
    }
}
int delet()
{
    if(f<0)
        printf("Queue is empty:\n");
    else if(f==r)
    {
        f=r=-1;
    }
    else
    {
        ++f;
    }
}
int ldelet()
{
    if(r<0)
        printf("Queue is empty:\n");
    else if(f==r)
    {
       f=r=-1;
    }
    r--;
}
int main()
{
    intsert(10);
    intsert(30);
    intsert(40);
    intsert(50);
    finsert(20);
   // delet();
   // ldelet();
    display();

}
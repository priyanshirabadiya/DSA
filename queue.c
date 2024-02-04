#include<stdio.h>
#define n 10
int f=-1,r=-1;
int a[n];

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
// int firstinsert(int val)
// {
// if(r<0)
// {
//     {
//         f=r=0;
//         a[r]=val;
//     }
// }
// else if(r==0)
// {
//     printf("number is not available\n");
// }
// else
// {
//         r--;
//         a[r]=val;
//     }
// }
// int firstdelect()
// {
//     if(r<0)
//         printf("Queue is empty:\n");
//     else if(r==f)
//     {
//         r=f=-1;
//     }
//     else
//     {
//         ++r;
//     }
// }
int delect()
{
    if(r<0)
        printf("Queue is empty:\n");
    else if(f==r)
    {
       f=r=-1;
       //printf("array is empty");
    }
    else
    {
    r--;
    }
}
int display()
{
    int i;
    if(f<0)
       printf("Queue is empty\n");
    else
    {
    for(i=f;i<=r;i++)
    {
        printf("%d ",a[i]);
    }
    }
    printf("\n");
}
int main()
{
    // firstinsert(150);
    // firstinsert(100);
  
   intsert(25);
   intsert(56);
   intsert(10);
   intsert(50);
   intsert(50);
    
  //firstdelect();
    delect();
    delect();
    delect();
    delect();
    delect();
  //  delect();
    display();
}
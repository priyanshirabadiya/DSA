#include<stdio.h>
#define n 5
int a[n],top=-1,i,c;

int finsert(int val)
{
int i;
if(top>=n-1)
printf("array is full......\n");
else if(top<0)
{
top++;
a[top]=val;
}
else
{
top++;
for(i=top;i>=0;i--)
{
a[i]=a[i-1];
}
a[0]=val;
printf("insert element is:%d",val);
}
}
int fdelet()
{
int c,i;
c=a[0];
if(top<0)
printf("array is empty...\n");
else
{
printf("deleted element is:%d",a[0]);
for(i=0;i<top;i++)
{
a[i]=a[i+1];
}
top--;
}
}
int insert(int val)
{   
    {
if(top>=n-1)
printf("Array is full.......\n");

else
{
    top++;
    a[top]=val;
}
    }
}

int delect()
{
if(top<0)
printf("Array is empty............\n");
else
{
    top--;
    a[top];
}
}


void dispaly()
{
if(top<0)
    printf("Array is empty......\n");
else
    {
    for(int i=0;i<=top;i++)
        printf("%d  ",a[i]);
    }
}

int main()
{
    finsert(20);
    finsert(80);
    fdelet();
   
    insert(10);
    insert(20);
    insert(30);
    insert(41);
    delect();
    dispaly();
}
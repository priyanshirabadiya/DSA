#include<stdio.h>
#define n 5
int a[n],f=-1,r=-1;
int display()
{
    int i=f;
    if(f<0)
        printf("queue is empty");
    else{
        do
        {
            printf("%d ",a[i]);
            i=(i+1)%n;
        }while(i!=(r+1)%n);
    }
    printf("\n");
}
int intsert(int val)
{
    if(r<0){
        f=r=0;
        a[r]=val;

    }else if((r+1)%n==f){
        printf("queue if full..\n");

    }
    else{
        r=(r+1)%n;
        a[r]=val;
    }
}
int delect()

{
    if(r<0)
        printf("array is empty");
    else if(f==r)
    {
        f=r=-1;
    }
    else
        f=(f+1)%n;
}   

int main()
{
   
    intsert(20);
    intsert(30);
    intsert(40);
    intsert(50);
    intsert(60);
    delect();
    delect();
    display();

    //first in first out
}

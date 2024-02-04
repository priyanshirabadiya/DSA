#include<stdio.h>
#include<stdlib.h>
#define n 10
int a[n],i,j,t;
int bubble()
{
    for( i=0; i< n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if( a[i] < a[j])
            {
                t=a[i];
                a[i] = a[j];
                a[j]=t;
            }
             
        }
    }
}

int main()
{ 
   
    for (i = 0; i < n; i++)
    {
        a[i] = rand()%100;
        printf("%d ", a[i]);
    }

    bubble();

    printf("\n bubble array:\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}
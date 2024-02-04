
#include<stdio.h>
int main()
{  
   int n,m;
   int t = 0;
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)    
    {
        printf("enter element :");
        scanf("%d",&a[i]);        
    }
    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }

    printf("\nsearch element :");
    scanf("%d",&m);
  
    printf("%d",m);
    
    for(i=0;i<n;i++)
    {
    if(m==a[i]){
      t = 1;
      printf("\npostion no is %d",i);  
    }
    } 
    if(t == 0){
      printf("\nNot found");
    }    
    
}



//-------------------------------------------------------------------------------------------------

// #include<stdio.h>
// #define n 10
// #include<stdlib.h>
//  int  a[n];
//  int e;
// int lin()
// {
// int i;

// for(i=0;i<n;i++)
// {
// if(e==a[i])
// return i;
// }
// return -1;
// }
// int main()
// {
// int i;
// printf("array element:");
// for(i=0;i<n;i++)
// {
// a[i]=rand()%100;
// printf("  %d  ",a[i]);
// }
// printf("\nenter search element:");
// scanf("%d",&e);
// int m=lin();
// if(m!=-1)
// {
// printf("array position number:%d",m);
// }
// else
// {
// printf("not found");
// }
// }

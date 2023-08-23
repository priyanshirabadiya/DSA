/**
#include<stdio.h>
#define n 8
int a[]={11,21,31,41,51,61,71,81};

int bineary()
{
    int l=0,h=n-1, mid,x;
    printf("\nEnter search element: ");
    scanf("%d",&x);

     while(l<=h)
    {
             mid = (l+h)/2;
    
       if(a[mid] == x)
       {
          return mid;            
       }
       else if(a[mid] < x)
       {
          l=mid+l;
       }
       else if(a[mid] >x)
       {
          h=mid-l;
       }
    }
      return -1;

}
int main()
{
    int x,p;

    
      for(int i=0; i<n; i++)
      {
        printf("%d ",a[i]);
      }
    
      p =bineary();

      if(p ==-1)
      {
         printf("element is not found....");
      }
      else
      { 
       
        printf("position: %d",p);
      }

}
*/
//---------------------------------------------------------------------------------------------

#include <stdio.h>
#define n 10
int a[] = {1, 5, 10, 15, 19, 24, 26, 37, 41, 49};

int binary(int a[], int l, int h, int x) {
    int mid;
    while (l <= h) {
        mid = (l + h) / 2;
        if (a[mid] == x)
            return mid;
        else if (a[mid] < x)
            l = mid + 1;
        else
            h = mid - 1;
    }
    return -1;
}

int main() {
    int x;  
     for(int i=0; i<n; i++)
      {
        printf("%d ",a[i]);
      }
    printf("\nEnter the element to search: ");
    scanf("%d", &x);

    int m = binary(a, 0, n - 1, x);
    if (m == -1)
        printf("Element is not found.\n");
    else
        printf("Element is found at position %d.\n", m);

    return 0;
}


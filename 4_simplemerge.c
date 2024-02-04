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


//-----------------------------------------------------------------------

#include <stdio.h>

int main() {
    int m, n, k, i;

    int a[] = {10, 20, 3};  
    int b[] = {5, 4, 3};    
    int c[6]; 

    for (i = 0; i < 3; i++) {
        c[i] = a[i]; 
    }
    k = i; 
    for (i = 0; i < 3; i++) {
        c[k++] = b[i];  
    }

    for (i = 0; i < 6; i++) {
        printf("%d ", c[i]); 
    }

    return 0;
}
//-----------------------------------------------------------------------------------------------------



#include<stdio.h>
int main() {
    int i, j;
    int a[] = {1, 3, 5, 7}; 
    int b[] = {2, 8, 6, 10}; 
    int c[10];
    int m= sizeof a[0];
    int n=sizeof b[0];
    i = 0;
    j = 0;
    int k = 0;

    while (i < n && j < m) {
        if (a[i] < b[j]) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < n) {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j < m) {
        c[k] = b[j];
        j++;
        k++;
    }

    printf("Merged  array: ");
    for (int x = 0; x < m + n; x++) {
        printf("%d ", c[x]);
    }
    
    printf("\n");

    return 0;
}

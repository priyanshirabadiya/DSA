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

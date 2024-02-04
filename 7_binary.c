
// #include<stdio.h>
// #define n 8
// int a[]={11,21,31,41,51,61,71,81};

// int bineary()
// {
//     int l=0,h=n-1, mid,x;
//     printf("\nEnter search element: ");
//     scanf("%d",&x);

//      while(l<=h)
//     {
//              mid = (l+h)/2;
    
//        if(a[mid] == x)
//        {
//           return mid;            
//        }
//        else if(a[mid] < x)
//        {
//           l=mid+l;
//        }
//        else if(a[mid] >x)
//        {
//           h=mid-l;
//        }
//     }
//       return -1;

// }
// int main()
// {
//     int x,p;

    
//       for(int i=0; i<n; i++)
//       {
//         printf("%d ",a[i]);
//       }
    
//       p =bineary();

//       if(p ==-1)
//       {
//          printf("element is not found....");
//       }
//       else
//       { 
       
//         printf("position: %d",p);
//       }

// }

//---------------------------------------------------------------------------------------------

// #include <stdio.h>
// #define n 10
// int a[] = {1, 5, 10, 15, 19, 24, 26, 8, 41, 49};

// int binary(int a[], int l, int h, int x) {
//     int mid;
//     while (l <= h) {
//         mid = (l + h) / 2;
//         if (a[mid] == x)
//             return mid;
//         else if (a[mid] < x)
//             l = mid + 1;
//         else
//             h = mid - 1;
//     }
//     return -1;
// }

// int main() {
//     int x;  
//      for(int i=0; i<n; i++)
//       {
//         printf("%d ",a[i]);
//       }
//     printf("\nEnter the element to search: ");
//     scanf("%d", &x);

//     int m = binary(a, 0, n - 1, x);
//     if (m == -1)
//         printf("Element is not found.\n");
//     else
//         printf("Element is found at position %d.\n", m);

//     return 0;
// }




// // C program to implement linear search using loops
// #include <stdio.h>

// // linear search function that searches the key in arr
// int linearSearch(int* arr, int size, int key)
// {
// 	// starting traversal
// 	for (int i = 0; i < size; i++) {
// 		// checking condition
// 		if (arr[i] == key) {
// 			return i;
// 		}
// 	}
// 	return -1;
// }

// // Driver code
// int main()
// {
// 	int arr[10] = { 3, 4, 1, 7, 5, 8, 11, 42, 3, 13 };
// 	int size = sizeof(arr) / sizeof(arr[0]);
// 	int key = 5;

// 	// calling linearSearch
// 	int index = linearSearch(arr, size, key);

// 	// printing result based on value returned by
// 	// linearSearch()
// 	if (index == -1) {
// 		printf("The element is not present in the arr.");
// 	}
// 	else {
// 		printf("The element is present at arr[%d].", index);
// 	}

// 	return 0;
// }



// #include <stdio.h>

// int linearSearch(int arr[], int n, int target) {
//   for (int i = 0; i < n; i++) {
//     if (arr[i] == target) {
//       return i;
//     }
//   }
//   return -1;
// }

// int main() {
//   int arr[] = {1, 3, 5, 7, 9};
//   int target = 7;
//   int result = linearSearch(arr, sizeof(arr) / sizeof(arr[0]), target);
//   if (result == -1) {
//     printf("Element not found in the array.\n");
//   } else {
//     printf("Element found at index %d.\n", result);
//   }
//   return 0;
// }




// #include <stdio.h>
// int main()
// {
// int i, low, high, mid, n, key, array[100];
// printf("Enter number of elementsn");
// scanf("%d",&n);
// printf("Enter %d integersn", n);
// for(i = 0; i < n; i++)
// scanf("%d",&array[i]);
// printf("Enter value to findn");
// scanf("%d", &key);
// low = 0;
// high = n - 1;
// mid = (low+high)/2;
// while (low <= high) {
// if(array[mid] < key)
// low = mid + 1;
// else if (array[mid] == key) {
// printf("%d found at location %d.n", key, mid+1);
// break;
// }
// else
// high = mid - 1;
// mid = (low + high)/2;
// }
// if(low > high)
// printf("Not found! %d isn't present in the list.n", key);
// return 0;
// }




#include <stdio.h>
#define n 10
int a[] = {1, 5, 10, 15, 19, 24, 26, 8, 41, 49};

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

    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\nEnter the element to search: ");
    scanf("%d", &x);

    int m = binary(a, 0, n - 1, x);
    if (m == -1)
        printf("Element is not found.\n");
    else
        printf("Element %d is found at index position %d.\n", x, m);

    return 0;
}

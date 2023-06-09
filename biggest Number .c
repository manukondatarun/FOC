#include<stdio.h>
int main() {
   int n, i;
   int arr[100];
   int max;

   printf("Enter the number of integers: ");
   scanf("%d", &n);

   printf("Enter %d integers:\n", n);
   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }

   max = arr[0];

   for (i = 1; i < n; i++) {
      if (arr[i] > max) {
         max = arr[i];
      }
   }

   printf("The biggest integer is: %d", max);
   return 0;
    }
    
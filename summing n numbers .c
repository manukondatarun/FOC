#include<stdio.h>
int main() 
{
   int n,i, sum = 0;
   printf("Enter a positive integer n: ");
   scanf("%d", &n);
   
   for (int i = 1; i <= n; i++) 
         sum += i;
   printf("The sum of the n numbers=%d", sum);
   
   return 0;

}
    
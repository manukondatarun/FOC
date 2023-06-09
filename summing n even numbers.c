#include<stdio.h>
int main() 
{
   int n,i, sum = 0;
   printf("Enter a positive integer n: ");
   scanf("%d", &n);
   
   for (int i =0; i <= n; i+=2) 
         sum += i;
   printf("The sum of the n even numbers=%d", sum);
   
   return 0;

}
    
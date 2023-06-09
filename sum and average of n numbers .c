#include<stdio.h>
int main() 
{
   int n,i, sum = 0,avg;
   printf("Enter a positive integer n: ");
   scanf("%d", &n);
   
   for (int i = 1; i <= n; i++) 
         sum += i;
        avg=sum/n;
   printf("The sum of the n numbers=%d,the avg of the n numbers=%d\n", sum,avg);
   
   return 0;

}
    
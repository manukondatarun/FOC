#include<stdio.h>
int main() 
{
   int n,i;
   printf("Enter a positive integer n: ");
   scanf("%d", &n);
   
   for ( i =1; i <= n; i+=2)
   printf(" odd numbers are:%d,",i);
   return 0;

}
    
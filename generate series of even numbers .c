#include<stdio.h>
int main() 
{
   int n,i;
   printf("Enter a positive integer n: ");
   scanf("%d", &n);
   
   for ( i =2; i <= n; i+=2)
   printf(" %d,",i);
   return 0;

}
    
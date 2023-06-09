#include<stdio.h>
int main()
{
  int n,i,sum=0;

  printf("Enter n value: ");
  scanf("%d", &n);

  for(int i=1; i<=n; i+=2)
  {
     sum += (i*i);
  }

  printf("Sum of squares of odd numbers= %d",sum);
  return 0;
}
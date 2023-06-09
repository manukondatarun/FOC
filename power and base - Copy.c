#include <stdio.h>
 #include <math.h>
long long int sumOfSeries(int n)
 { long long int sum = 0;
 for (int i = 1; i <= n; i++)
 { 
long long int term = pow(i, i);
 sum += term; 
} 
return sum;
 }
 int main()
 { 
int n; 
printf("Enter the value of n: ");
 scanf("%d", &n); 
long long int result = sumOfSeries(n); 
printf("The sum of the series is: %lld\n", result);
 return 0; 
}
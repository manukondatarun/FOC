#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the range of number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            sum-=i;
        else
            sum+=i;
    }

    printf("The sum of the series = %d",sum);
}
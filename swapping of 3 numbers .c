#include<stdio.h>
int main() {
    int a = 5;
    int b = 10;
    int c = 15;
    int temp;
    printf("Before swapping: a = %d, b = %d , c = %d\n", a, b , c);
    temp=a;
    a=c ;
    c=b;
    b=temp;
    
    
printf("After swapping: a = %d, b = %d , c = %d\n", a, b,c);

    return 0;
}
    
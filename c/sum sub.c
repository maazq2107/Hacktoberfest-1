#include<stdio.h>

int main()
{
    int x,y,z,a,b,c;
    float d;
    printf("enter the value of a and b \t");
    scanf("%d %d", &a,&b);
    x=a+b;
    y=a-b;
    z=a*b;
    d=a/b;
    printf("\nSum of two numbers is %d", x);
    printf("\nSubtraction of two number is %d", y);
    printf("\nMultiplication of two number is %d", z);
    printf("\nDivison of two number is %f", d);

    }

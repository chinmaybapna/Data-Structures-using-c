#include<stdio.h>

int gcd(int a, int b)
{
    if(b != 0)
    {
        return gcd(b, a%b);
    }
    else
    {
        return a;
    }
}

void main()
{
    int a, b;
    printf("enter two numbers : \n");
    scanf("%d%d", &a, &b);
    printf("the gcd of the numbers is: %d", gcd(a,b));
}

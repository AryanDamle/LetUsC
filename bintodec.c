#include <stdio.h>

int power(int , int);
int main()
{
    int bin[8],dec=0,i=7;

    printf("Enter the binary number:---\n");

    for(i = 7; i >= 0 ; i--)
    {
        scanf("%d", &bin[i]);
    }

    for(i = 0; i<= 7 ; i++)
    {
        dec = dec + (bin[i] * power(2,i));
    }

    printf("The decimal number is: %d", dec);
    return 0;
}

int power(int x , int y)
{
    int j, pow = 1;

    for(j = 1; j<=y ; j++)
    {
        pow = pow * x;
    }

    return pow;
}
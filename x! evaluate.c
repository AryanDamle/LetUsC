#include <stdio.h>
//1/1! + 1/2! + 1/3!
int fact();
int main()
{
    int y,sum;

    for(y=1;y<=7;y++)
    {
        sum = sum + (1/fact(y));
    }

    getch();
    return 0;

}
int fact(int x)
{
    int fac=1, i;

    for(i = 1;i<=x;i++)
    {
        fac = fac * i;
    }

    return fac;
}

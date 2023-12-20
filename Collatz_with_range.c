#include <stdio.h>


int main()
{
    int i,cntr,temp;

    printf("Enter range: \n");
    scanf("%d", &i);

    for(cntr = 1; cntr <= i ; cntr++)
    {
        temp = prime(cntr);

        if(temp == 1)
        {
            collatz(cntr,cntr);
        }
    }
    getch();
    return 0;
}

int prime(int x)
{
    int i,r=0;



    for(i = 1; i<=x ; i++)
    {

        if(x % i == 0)
        {
            r++;
        }



    }

    if(r == 2)
    {

        return 1;
    }

    else
    {

        return 0;
    }
}

int collatz(int y, int j)
{
    while(y>1)
    {

        if(y % 2 == 0)
        {
            y = y / 2;
        }
        else
        {
            y = (y * 3) + 1;
        }

        if(y == 16)
        {
            printf("%d got to 1 via 16\n",j);

        }

        else
        {
            continue;
        }
    }
}

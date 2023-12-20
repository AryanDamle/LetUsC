#include <stdio.h>
int prime[] = {2,3,5,7,11,13,17,19,23,29};
int i=0;
int main()
{
    int num;

    printf("Enter number:\n");
    scanf("%d", &num);
    printf("PRIME FACTORS ARE: ");
    pfactor(num,i);

    getch();
    return 0;
}

void pfactor(int x,int y)
{

    if(x == 1)
    {
        return x;
    }
    if(y >=10 )
    {
        printf("can only check till max factors 29\n");
    }

    else
    {
        if(x % prime[y] == 0)
        {
            printf("%d ", prime[y]);
            x = x/prime[y];
            pfactor(x,y);
        }
        else
        {
            pfactor(x,y+1);
        }
    }

}

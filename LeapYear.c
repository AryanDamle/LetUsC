#include <stdio.h>
#include <math.h>
int main()
{
    int yr;

    printf("Enter year: ");
    scanf("%d", &yr);

    if(yr%100==0)
    {
        if(yr%400==0)
            printf("Leap year");
        else
            printf("Not leap year");
    }
    else
    {
        if(yr%4==0)
            printf("Leap year");
        else
            printf("Not leap year");
    }
    getch();
    return 0;
}


#include <stdio.h>
#include <math.h>

int main()
{
    int i,plot;
    float  a[]={137.4 , 155.2 , 149.3 , 160.0 , 155.6 , 149.7} , b[] = {80.9 , 92.62 , 97.93 , 100.25 , 68.95 , 120.0}, ang[]={0.78 , 0.89 , 1.35 , 9.00 , 1.25 , 1.75} ,area,larg=0;

    for(i = 0 ; i<=5 ; i++)
    {

        area = (0.5) * a[i] * b[i];
        area = area * (sin(ang[i]));
        if(area > larg)
        {
            larg = area;
            plot = i;
        }
        else
        {
            continue;
        }
    }
    printf("%d", plot);

    getch();
    return 0;
}

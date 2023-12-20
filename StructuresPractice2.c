#include <stdio.h>
void linkfloat();

int main()
{
    int i;
    struct data
    {
        char name[15]; float gigs;
    };
    struct data games[3] = {{"minecraft", 1.2}, {"valorant", 12.5}, {"csgo", 9}};

    for(i = 0;i<=2 ; i++)
    {
        printf("%s is %1.2f gigabytes big \n", games[i].name , games[i].gigs);
        printf("%s is stored at memory location %u and %1.0f is stored at memory location %u \n", games[i].name , &games[i].name , games[i].gigs , &games[i].gigs);
    }

    getch();
    return 0;



}

void linkfloat()
{
    float a=0, *b;
    b = &a;
    a = *b;
}

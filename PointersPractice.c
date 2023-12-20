#include <stdio.h>

int main()
{
    int c = 5 , *j , **p;

    j = &c;
    p = &j;

    printf("Value of c %d\n", c);
    printf("Address of c %u\n", &c);
    printf("value of j %d\n", j);
    *j = *j + 7;
    printf("%d", c);
    j = j + 6;
    printf("%d", *j);
    getch();
    return 0;

}

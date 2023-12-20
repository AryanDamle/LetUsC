#include <stdio.h>
int main()
{
    int i,f;
    printf("Enter a number > 0: \n");
    scanf("%d", &i);
    f = 1;
    while(i > 1)
    {
        f = f * i;
        i = i-1;
    }
    printf("%d", f);
    getch();
    return 0;
}

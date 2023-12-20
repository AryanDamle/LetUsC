#include <stdio.h>
int main()
{
    char abc;
    printf("Enter A or B or C: ");
    scanf("%c",&abc);

    switch(abc)
    {
    case 'a':
    case 'A':
        printf("you entered A");
        break;

    case 'b':
    case 'B':
        printf("You entered B");
        break;

    case 'c':
    case 'C':
        printf("You entered c");
        break;

    default:
        printf("Bruh");

        return 0;
    }
    getch();
}

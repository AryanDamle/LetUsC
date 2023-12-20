#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if(c >= 65 && c <= 90)
        printf("You entered an Uppercase character");

    else if(c >= 97 && c <= 122)
        printf("You entered a Lowercase character");

    else if((c >= 0 && c <= 47) || (c >= 58 && c <= 64) || (c >= 91 && c <= 96) || (c >= 123 && c <= 127))
        printf("You entered a special case character which is %c", c);

    getch();
    return 0;

}

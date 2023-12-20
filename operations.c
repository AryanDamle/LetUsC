#include <stdio.h>

int main()
{
    int a,b;
    float fin;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    fflush(stdin);
    printf("Enter +,-,*,/: ");
    scanf("%c", &op);


    if(op == '+')
    {
        fin = a + b;
    }

    if(op == '-')
    {
        fin = a - b;
    }

    if(op == '*')
    {
        fin = a * b;
    }


    if(op == '/')
    {
        fin = a / b;
    }
    printf("%d %c %d = %f",a,op,b,fin);

    getch();
    return 0;
}

#include<stdio.h>
int main()
{
    int a,b,c,i;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    c = i = 1;

    while(i <= b)
    {
        c = c * a;
        i = i + 1;
    }
    printf("%d raised to the power of %d = %d",a,b,c);
    getch();
    return 0;
}

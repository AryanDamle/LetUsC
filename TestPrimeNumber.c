#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    b = 2;
    while(b <= a-1)
    {
        if(a % b == 0)
               {
                   printf("Not a prime number");
                   break;
               }
     b++;
    }
    if(b == a)
        printf("prime number");

    getch();
    return 0;

}

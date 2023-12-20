#include <stdio.h>
int main()
{
    int i,n=1,num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Prime numbers between 1 and %d are: \n",num);

    for(n=1; n <= num; n++)
    {
        i=2;
        for(i = 2; i < n; i++)
        {
            if(n % i == 0)
                break;
        }
        if(i == n)
            printf("%d\t", n);

    }
    getch();
    return 0;
}

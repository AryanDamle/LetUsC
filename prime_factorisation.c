# include<stdio.h>
# include<math.h>
int main()
{
    int n;
    printf("Enter a number(not in decimals): ");
    scanf("%d",&n);
    if(n%2==0)
        printf("%d is divisible by 2\n",n);

    if(n%3==0)
        printf("%d is divisible by 3\n",n);

    if(n%5==0)
        printf("%d is divisible by 5\n",n);

    if(n%7==0)
        printf("%d is divisible by 7\n");

    getch();
    return 0;
}

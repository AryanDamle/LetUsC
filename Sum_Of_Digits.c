#include <stdio.h>
int dit,summ=0,mod = 10,mod2=10,temp;
int main()
{
    int num;

    printf("Enter a 5 digit number: ");
    scanf("%d", &num);

    sum(num,mod,mod2);
    getch();
    return 0;

}
int sum(int n,int f,int x)
{

    if(f == 100000)
    {
        printf("Sum of the digits is : \n %d", summ);
    }
    else
    {
        if(f == 10)
        {
            temp = n%f;
            dit = temp%x;
            summ = summ + dit;
            sum(n,f*10,x);
        }
        else
        {
            temp = n%f;
            dit = temp%x;
            summ = summ + dit;
            sum(n,f*10,x*10);
        }


    }
}

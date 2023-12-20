
#include <stdio.h>

int bin[32];
void decToBin(int num, int ctr);

int main()
{
    int dec,i=31;
    int flag=0;

    printf("Enter the number: \n");
    scanf("%d",&dec);

    decToBin(dec,i);

    for(i = 0; i<32; i++)
    {
        if(bin[i] == 1)
        {
            flag = 1;
        }

        if(flag == 1)
        {
            printf("%d",bin[i]);
        }

    }

    return 0;

}

void decToBin(int num, int ctr)
{

    if(num == 0)
    {
        bin[ctr] = 0;
    }
    else
    {
        if(num % 2 == 0)
        {
            bin[ctr] = 0;
        }
        else
        {
            bin[ctr] = 1;
        }

        num = num/2;
        ctr--;
        decToBin(num , ctr);
    }
}

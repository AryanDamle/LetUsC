#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ar[5] , i=0, temp,ctr=3;

    printf("Enter the numbers: \n");

    for(i = 0; i <= 4; i++)
    {
        scanf("%d", &ar[i]);
    }

    i = 0;

            for(ctr = 4; ctr > 0; ctr--)
            {


                for(i = 0; i <= ctr; i++)
                {
                    if(ar[i] > ar[i+1])
                    {
                        temp = ar[i+1];
                        ar[i+1] = ar[i];
                        ar[i] = temp;
                        i--;
                    }
                    else
                    {
                        continue;
                    }
                }


            }



    for(i=0;i <= 4 ; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}


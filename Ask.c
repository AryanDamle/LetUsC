#include <stdio.h>


int main()
{
    int arr[4], temp, i,j,k=4;

    for(i=0; i<4; i++)
    {
        printf("Enter the number in array: \n");
        scanf("%d", &arr[i]);
    }

    for(j = 0; j<=3; j++)
    {
        temp = arr[0];
        for(i=0; i<=k; i++)
        {
            if(i == k)
            {
                arr[i] = temp;

            }
            else
            {
                arr[i] = arr[i+1];
            }
        }
        k--;
    }

    for(j=0; j<=4; j++)
    {
        printf("%d",arr[0]);
    }

    getch();
    return 0;
}

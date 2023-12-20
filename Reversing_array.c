#include <stdio.h>


int main()
{
    int arr[40], temp, i,j,k,length;

    printf("Enter a length of the array: \n");
    scanf("%d", &length);
    k = length - 1;
    printf("Enter the numbers in array: \n");
    for(i=0; i<=k; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(j = 0; j<=length-2; j++)
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
        k=k-1;
    }

    printf("The reverse of the array is: ");
    for(j=0; j<=length-1; j++)
    {
        printf("%d ",arr[j]);
    }

    return 0;
}
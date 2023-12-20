#include <stdio.h>

int main()
{
    int arr[40] , length,i,j,temp,k;

    printf("Enter the length of the array: \n");
    scanf("%d", &length);

    printf("Enter the numbers in the array: ");
    for(j=0; j<= length-1; j++)
    {
        scanf("%d", &arr[j]);
        
    }
    k = length -1;

    if(length % 2 != 0)
    {
        i = (length - 1)/2;
        i--;

        for(j=0; j <= i; j++)
        {
            temp = arr[j];
            arr[j] = arr[k];
            arr[k] = temp;

            k--;
        }
        
    }
    
    else
    {
        i = length/2;

        for(j=0; j <= i; j++)
        {
            temp = arr[j];
            arr[j] = arr[k];
            arr[k] = temp;

            k--;
        }

    }

    printf("The reverse of the array is: ");

    for(j=0; j<= length-1; j++)
    {
        printf("%d ", arr[j]);
    }

    return 0;

}
                  
   
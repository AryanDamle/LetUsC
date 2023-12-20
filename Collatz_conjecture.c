#include <stdio.h>
int main()
{
    int n,i=0;
    printf("Enter a number > 0 : ");
    scanf("%d", &n);

    while(n != 1)
    {
        if(n%2==0)
         {

          n=n/2;
          printf("%d ",n);

         }

        else
            {
            n=n*3+1;
            printf("%d ",n);

            }



            i++;
    }
    printf("\nConverged in %d iterations",i);
    getch();
    return 0;
}


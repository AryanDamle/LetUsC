#include <stdio.h>

void swap(int x , int y);
int sort(int i, int c);
int ar[] = {0 , 2 , 119, 0 , 11 , 10 , 4};
int size = 7;
int i = 0;
int main()
{
    int j;
    sort(i,0);

    for(j=0;j <= size-1 ; j++)
    {
        printf("%d ", ar[j]);
    }
    getch();
    return 0;

}

int sort(int i, int c)
{
    if(i == 0)
    {

            if(ar[c] <= ar[c+1])
            {
                c++;

                if(c +1 == size)
                {
                    i = 1;
                }
                sort(i,c);
            }

            else
            {
                swap(c , c+1);
                sort(i , c-1);
            }
    }


    else
    {
        return 0;
    }

}


void swap(int x , int y)
{
    int temp;

    temp = ar[y];
    ar[y] = ar[x];
    ar[x] = temp;

}

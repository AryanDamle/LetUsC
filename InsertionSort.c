#include <stdio.h>

void insort(int k , int h);
void swap(int x , int y);
ar[] = {5 , 2 , 0 , 6 , 10 , 4 , 8};
int size = 7;
int main()
{
    int i = 0;
    insort(1,0);
    for (i = 0 ; i <=6 ; i++)
    {
        printf("%d ", ar[i]);
    }

    getch();
    return 0;
}


void insort(int k , int h)
{
    int temp,i,j;

    temp = ar[k];
    j = k;
    if(k <= size-1)
    {
        if(temp < ar[k-1])
        {
            ar[k] = ar[k-1];
            ar[k-1] = temp;
            k=k-1;
            if(k == 0)
            {
                k = j+1;
            }
            insort(k,h);
        }
        else
        {
            k++;
            insort(k , 0);
        }
    }
}

void swap(int x , int y)
{
    int temp;

    temp = ar[y];
    ar[y] = ar[x];
    ar[x] = temp;

}

#include <stdio.h>

ar[] = {7,4,8,1,2,0,3};
size = 7;

void swap(int x , int y);
void selsort(int cur);
int minInd=0;
int k=0;
int main()
{

    for(k = 0 ; k<=size-1 ; k++)
    {
        printf("%d ", ar[k]);
    }

    printf("\n");
    k=0;
    selsort(0);

    for(k = 0 ; k<=size-1 ; k++)
    {
        printf("%d ", ar[k]);
    }

    getch();
    return 0;

}

void swap(int x , int y)
{
    int temp;
    temp = ar[x];
    ar[x] = ar[y];
    ar[y] = temp;
}

void selsort(int cur)
{
    if(k < size)
    {
        if(cur < size)
        {
            if(ar[cur] < ar[minInd])
            {
                minInd = cur;
                selsort(cur);
            }
            else
            {
                cur++;
                selsort(cur);
            }
        }

        else
        {
            swap(minInd , k);
            k++;
            minInd = k;
            selsort(k);
        }
    }

    else
    {
        return 0;
    }
}

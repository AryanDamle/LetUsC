#include <stdio.h>

int main()
{
    FILE *f;
    int i;

    f = fopen("io.txt", "r");

    fscanf(f , "%d", &i);

    printf("%d", i);

    fclose(f);

    return 0;
    
}


    
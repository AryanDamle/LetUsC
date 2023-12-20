#include <stdio.h>
#include <string.h>
int main()
{

    char a[20];
    int x;

    printf("Enter a  name of website : \n");
    scanf("%s", &a);

    x = strcmp(a,"youtube");

    if(x==0)
    {
        printf("www.youtube.com");
    }

    else{
        printf("sorry no website available");
    }

    getch();
    return 0;
}

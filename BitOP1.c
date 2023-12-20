#include <stdio.h>
int main()
{
    unsigned char ch,dh;
    printf("Enter a number <= 225: ");
    scanf("%d", &ch);

    dh = ~ch;

    printf("~ch = %d\n",dh);
    printf("~ch = %x\n",dh);
    printf("~ch = %X\n",dh);
    printf("~ch = %#X\n",dh);
    printf("%c\n",ch);
    dh = 1 << 3;
    printf("%d\n",dh);
    getch();
    return 0;
}

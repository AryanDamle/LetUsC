#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char data[49],pass[9],encryp[49],passnew[9],decryp[49];
    int i=0,j=0;


    printf("Enter Data: \n");
    scanf("%s",&data);
    printf("Enter password\n");
    scanf("%s", &pass);
    while(i<=49)
    {
        encryp[i] = data[i] ^ pass[j];

        i++;
        j++;

        if(j == 9)
        {
            j = 0;
        }
    }
    printf("Encrypted data is %s \n",encryp);
    printf("Enter the password again: \n");
    scanf("%s", &passnew);

    i = 0;
    j = 0;

    while(i<=49)
    {
        decryp[i] = encryp[i] ^ passnew[j];

        i++;
        j++;

        if(j == 9)
        {
            j = 0;
        }
    }
    printf("Your data is: %s", decryp);


    getch();
    return 0;
}

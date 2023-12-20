#include <stdio.h>
#include <string.h>
int main()
{
    char ch[50],pass[50],enpas[50];
    int i,icr,cmp;

    printf("enter something to be encoded: \n");
    scanf("%s", &ch);
    printf("enter the number of increment done: \n");
    scanf("%d", &icr);
    printf("Create password (character limit is 50): \n");
    scanf("%s",&pass);


    for(i = 0; i <= 50; i++)
    {
        if(ch[i] == 0)
        {
            break;
        }
        else
        {
            ch[i] = ch[i] + icr ;
        }

    }
    printf("The encoded message is %s\nTo decrypt it please enter the password: ", ch);
    scanf("%s", &enpas);

    cmp = strcmp(pass,enpas);

    if(cmp == 0)
    {
        for(i = 0; i<=50 ; i++)
        {
            if(ch[i] == 0)
            {
                break;
            }
            else
            {
                ch[i] = ch[i] - icr;
            }


        }
        printf("The message you entered was %s \n", ch);
    }
    else
    {
        printf("Sorry wrong password\n");
    }




    getch();
    return 0;
}

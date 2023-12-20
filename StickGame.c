#include <stdio.h>

int main()
{
    int comp_take , stick_left = 21 , user_inp ;

    while(stick_left>=1)
    {
        printf("Enter 1 , 2 , 3 , 4: ");
        scanf("%d", &user_inp);

        comp_take = 5 - user_inp;

        printf("The computer chooses %d\n", comp_take);
        stick_left = stick_left - (user_inp + comp_take);
        printf("Sticks left are %d\n", stick_left);


        if(stick_left == 1)
        {
            printf("last stick left which has to be picked by you , you lose");
            break;
        }
    }

    getch();
    return 0;
}

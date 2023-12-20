#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <process.h>
#include <stdlib.h>
#include <string.h>
void gotoxy(int , int);
int x = 40 , y = 12;
int main()
{
    char key,draw_key ='a';

    gotoxy(x,y);

    key = getch();




    while(key!=27)
    {


        switch(key)
        {
            case 72: y =y-1; break;
            case 80: y =y+1; break;
            case 77: x =x+1; break;
            case 75: x =x-1; break;

        }

        if(key>='a'&& key<='z')
        {
            draw_key = key;
        }
        if(key==' ')
            draw_key = key;

        gotoxy(x,y);
        printf("%c", draw_key);
        key = getch();

    }




    getch();
    return 0;
}



void gotoxy(int col, int row)
{
    COORD c;
    c.X = col;
    c.Y = row;

    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);

}


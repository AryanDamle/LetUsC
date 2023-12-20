#include <stdio.h>
#include <string.h>
int month_number();
void weekday();
char day[10];
int main()
{
    int date,year,f2,l2,temp,a,b;
    char month[10];

    printf("Enter the date\n");
    scanf("%d %s %d", &date , &month, &year);

    if(strcmp(month,"january") == 0 || strcmp(month,"february") == 0)
    {
        year = year - 1;
    }

    a = month_number(month);

    f2 = year/100;
    l2 = year % 100;

    temp = date + ((13*a-1)/5) + l2 + (l2/4) + (f2/4) - 2 * f2;

    if(temp < 0 )
    {
        b = (temp % 7 ) + 7;
    }


    else
    {
        b = temp % 7;
    }


    weekday(b);
    printf("%s", day);

    getch();
    return 0;

}
month_number(char *x)
{
    int m;
     if(strcmp(x,"january")==0)
    {
        m = 11;
    }
    else
    {
        if(strcmp(x,"february")==0)
        {
            m = 12;
        }
        else
        {
            if(strcmp(x,"march")==0)
            {
                m = 1;
            }
            else
            {
                if(strcmp(x,"april")==0)
                {
                    m = 2;
                }
                else
                {
                    if(strcmp(x,"may")==0)
                    {
                        m = 3;
                    }
                    else
                    {
                        if(strcmp(x,"june")==0)
                        {
                            m = 4;
                        }
                        else
                        {
                            if(strcmp(x,"july")==0)
                            {
                                m = 5;
                            }
                            else
                            {
                                if(strcmp(x,"augast")==0)
                                {
                                    m = 6;
                                }
                                else
                                {
                                    if(strcmp(x,"september")==0)
                                    {
                                        m = 7;
                                    }
                                    else
                                    {
                                        if(strcmp(x,"october")==0)
                                        {
                                            m = 8;
                                        }
                                        else
                                        {
                                            if(strcmp(x,"novemebr")==0)
                                            {
                                                m = 9;
                                            }
                                            else
                                            {
                                                if(strcmp(x,"december")==0)
                                                {
                                                    m = 10;
                                                }
                                                else
                                                {
                                                    printf("Enter a valid month\n");
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return m;
}
void  weekday(int y)
{

    if(y == 0)
    {
        strcpy(day, "Sunday");
    }
    else
    {
        if(y == 1)
        {
            strcpy(day,"Monday");
        }
        else
        {
            if(y == 2)
            {
                strcpy(day,"Tuesday");
            }
            else
            {
                if(y == 3)
                {
                    strcpy(day,"Wednesday");
                }
                else
                {
                    if(y == 4)
                    {
                        strcpy(day,"Thursday");
                    }
                    else
                    {
                        if(y == 5)
                        {
                            strcpy(day,"Friday");

                        }
                        else
                        {
                            if(y == 6)
                            {
                                strcpy(day,"Saturday");
                            }
                            else
                            {
                                printf("System Error 101");
                            }
                        }
                    }
                }
            }
        }
    }
}

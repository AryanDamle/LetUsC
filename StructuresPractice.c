#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    int rollno; char name[10];
};

int main()
{
    struct student p;

    p.rollno = 16;
    
    printf("%d", p.rollno);

    return 0;
}



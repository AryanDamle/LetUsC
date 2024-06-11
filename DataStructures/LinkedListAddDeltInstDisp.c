#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;
};

struct node * p;
int ctr=0;
struct node * head;

int main()
{
    int i,j,k;
    char key;

    while(key != 27)
    {


        printf("\n1 - Add , 2 - Delete , 3 - Insert , 4 - Display the list , esc - to stop: ");
        scanf("%d",&k);

        switch(k)
        {
        case 1:
            printf("\nenter the data in INT: ");
            scanf("%d",&j);
            add(j);
            break;
        case 2:
            printf("\nEnter the index number to be deleted: ");
            scanf("%d", &j);
            delt(j);
            break;
        case 3:
            printf("\nEnter the index number: ");
            scanf("%d", &j);
            printf("\nEnter the data in INT: ");
            scanf("%d", &i);
            insrt(j,i);
            break;
        case 4:
            display();

        }

        key = getchar();
    }

    getch();
    return 0;
}

void GoToEnd()
{
    p = head;
    while(p->next != NULL)
    {
        p = p->next;
    }
}

void add(int x)
{
    if(ctr == 0)
    {
        p = malloc(sizeof(struct node));
        head = p;
        p->data = x;
        p->next = NULL;
        ctr++;
    }
    else
    {
        GoToEnd();
        p->next = malloc(sizeof(struct node));
        p = p->next;
        p->data = x;
        p->next = NULL;
    }
}

void delt(int y)
{
    int i=0;
    struct node * temp;
    p = head;

    while(i < y)
    {
        p = p->next;
        i++;
    }

    temp = p->next->next;
    memset(p->next , 0 , sizeof(struct node));
    p->next = temp;



}

void insrt(int in , int val)
{
    int i=0;
    struct node * temp;

    p = head;

    while(i < in)
    {
        p = p->next;
        i++;
    }

    temp = p->next;
    p->next = malloc(sizeof(struct node));
    p->next->data = val;
    p->next->next = temp;
}

void display()
{
    int i=0;
    struct node * temp;
    p = head;

    while(p->next != NULL)
    {
        printf("\nData at index %d, is %d", i , p->data);
        p=p->next;
        i++;
    }

    printf("\nData at index %d , is %d", i++ , p->data);







}

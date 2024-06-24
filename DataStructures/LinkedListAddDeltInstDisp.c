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

void GoToEnd();
void add(int x);
void delt(int y);
void insrt(int in , int val);
void display();
void RecursiveDisp(struct node *p, int direction);
int SearchData(struct node *p , int val , int i);


int main()
{
    int i,j,k,src=0;
    char key;

    while(key != 27)
    {


        printf("\n1 - Add , 2 - Delete , 3 - Insert , 4 - Display the list , 5 - Search ");
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
            break;
        case 5:
            printf("\nEnter the data to be searched: ");
            scanf("%d", &j);
            i = SearchData(head,j,src);
            printf("\nThe data is at index %d",i);


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

    while(i < y-1)
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

    while(i < in-1)
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
    printf("\nPrinting forward : ");
    RecursiveDisp(head,0);

    printf("\nPrinting Reverse: ");
    RecursiveDisp(head,1);

}

void RecursiveDisp(struct node *p, int direction)
{
    if(direction == 0) // forward
    {
        printf(" %d",p->data);
        if(p->next!= NULL)
        {
            RecursiveDisp(p->next,direction);
        }
    }
    else
    {

        if(p->next!=NULL)
        {
            RecursiveDisp(p->next,direction);
        }

        printf(" %d",p->data);

    }

}

int SearchData(struct node *p , int val , int i)
{
    if(p->data != val)
    {
        p=p->next;
        SearchData(p, val , i++);
    }

    else
    {
        printf("Condition executed");
        return i;
    }

}


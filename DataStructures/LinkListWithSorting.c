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
void display(int x);
void RecursiveDisp(struct node *p, int direction);
void SortList(int dir);
void SwapList(int x , int y);
int SearchData(struct node *p , int val , int i);


int main()
{
    int i,j,k,src=0;
    char key;

    while(key != 27)
    {


        printf("\n1 - Add \n2 - Delete \n3 - Insert \n4 - Display the list \n5 - Search \n6 - sort\n");
        scanf("%d",&k);

        switch(k)
        {
        case 1:
            printf("\nEnter the data in INT: ");
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
            printf("0 - Forward\n 1 - Backward: ");
            scanf("%d", &j);
            display(j);
            break;
        case 5:
            printf("\nEnter the data to be searched: ");
            scanf("%d", &j);
            i = SearchData(head,j,src);
            printf("\nThe data is at index %d",i);
            break;
        case 6:
            printf("\nFor Ascending - 0 \nFor Descending - 1: ");
            scanf("%d", &j);
            SortList(j);
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

void display(int x)
{
    if(x == 0)
    {
        printf("\nPrinting forward : ");
        RecursiveDisp(head,0);
    }

    else
    {
        printf("\nPrinting Reverse: ");
        RecursiveDisp(head,1);
    }

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
    i=0;
    while(p->data != val)
    {
        p=p->next;
        i++;
    }

    return i;

}

void SortList(int dir)
{
    int i=0,j;

    if(dir == 0)
    {
        while(i == 0)
        {
            p = head;
            j=0;
            while(p->next != NULL && p->data <= p->next->data)
            {
                p=p->next;
                j++;
            }

            if(p->next != NULL)
            {
                SwapList(j,j+1);
            }

            else
            {
                i++;
            }
        }

        display(0);
    }

    else
    {
        while(i == 0)
        {
            p = head;
            j=0;
            while(p->next != NULL && p->data >= p->next->data)
            {
                p=p->next;
                j++;
            }

            if(p->next != NULL)
            {
                SwapList(j,j+1);
            }

            else
            {
                i++;
            }
        }

        display(0);
    }
}

void SwapList(int x , int y)
{
    int n=0;
    struct node * temp1;
    struct node * temp2;
    struct node * temp3;
    p = head;
    if(x>0)
    {
        while(n < x-1)
        {
            p=p->next;
            n++;
        }
        temp3 = p->next;
        temp2 = p->next->next;
        temp1 = p->next->next->next;

        p->next = temp2;
        p->next->next = temp3;
        p->next->next->next = temp1;
    }

    else
    {
        temp1 = head->next->next;
        p = head;
        head = head->next;
        head->next = p;
        head->next->next = temp1;

    }

}


#include<stdio.h>
#define size 10

struct node {
    int data;
    struct node *link;
};

struct node *temp, *head, *last, *ptr;

void push()
{
    temp = (struct node *)malloc(sizeof(struct node));
    printf("enter data\n");
    scanf("%d", &temp->data);
    temp->link = NULL;
    
    if(last == NULL)
    {
        last = temp;
        last->link = last;
    }
    else
    {
        temp->link = last->link;
        last->link = temp;
        last = temp;
    }
}

void display()
{
    ptr = last->link;
    while(ptr != last)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->link;
    }
    printf("%d\n", ptr->data);
}

void pop()
{
    if(last == NULL)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("the item to be deleted is %d\n", last->data);
        
        ptr = last->link;
        while(ptr->link!=last)
        {
            ptr = ptr->link;
        }
        ptr->link = last->link;
        free(last);
        last = ptr;
    }
}

void main() 
{
    int ch;
    while(1)
    {
        printf("1.push\n2.pop\n3.display\n4.exit\n");
        printf("enter operation\n");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: exit(0); break;
        }
    }
}

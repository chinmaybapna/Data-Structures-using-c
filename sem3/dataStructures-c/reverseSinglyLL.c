#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node *head, *ptr, *prev, *current , *temp;

void insert()
{
    temp =(struct node *)malloc(sizeof(struct node));
    printf("enter data\n");
    scanf("%d", &temp->data);
    temp->link = NULL;
    
    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->link = head;
        head = temp;
    }
}

void reverse()
{
    prev = NULL; 
    current = head; 
    ptr = NULL; 
    while (current != NULL) { 
        ptr = current->link; 
        current->link = prev; 
        prev = current; 
        current = ptr; 
    } 
    head = prev; 
}

void display()
{
    ptr = head;
    if(head == NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        while(ptr!= NULL)
        {
            printf("%d -> ", ptr->data);
            ptr = ptr->link;
        }
    }
}

void main()
{
    int ch;
    while(1)
    {
        printf("\n1.insert\n2.display\n3.reverse\n4.exit\n");
        printf("enter choice\n");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: insert(); break;
            case 2: display(); break;
            case 3: reverse(); break;
            case 4: exit(0);
        }
    }
}

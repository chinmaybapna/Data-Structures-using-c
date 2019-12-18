#include<stdio.h>

struct node {
    int data;
    struct node *llink;
    struct node *rlink;
};

struct node *head = NULL, *tail = NULL, *ptr, *temp;

void insert()
{
    temp = (struct node *)malloc(sizeof(struct node));
    printf("enter data\n");
    scanf("%d", &temp->data);
    temp->llink = NULL;
    temp->rlink = NULL;
    
    if(head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else if(temp->data <= head->data)
    {
        temp->rlink = head;
        temp->llink = NULL;
        head->llink = temp;
        head = temp;
    }
    else
    {
        ptr = head;
        while(ptr != NULL && ptr->data <= temp->data)
        {
            ptr = ptr->rlink;
        }
        if(ptr == NULL)
        {
            temp->llink = tail;
            tail->rlink = temp;
            tail = temp;
        } else {
            temp->llink = ptr->llink;
            ptr->llink->rlink = temp;
            temp->rlink = ptr;
            ptr->llink = temp;
        }
        
    }
}

void display()
{
    if(head == NULL)
    {
        printf("list is empty\n");
    } else {
        ptr = head;
        while(ptr!=NULL) {
            printf("%d -> ", ptr->data);
            ptr = ptr->rlink;
        }
    }
}

void main()
{
    int ch;
    while(1)
    {
        printf("\n1.insert in ordered way\n2.display\n3.exit\n");
        printf("enter choice\n");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: insert(); break;
            case 2: display(); break;
            case 3 : exit(0);
        }
    }
}

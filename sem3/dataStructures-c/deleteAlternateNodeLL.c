#include<stdio.h>

struct node {
    int data;
    struct node *link;
};

struct node *head, *temp, *ptr, *prev, *next;

void insert()
{
    temp = (struct node *)malloc(sizeof(struct node));
    printf("enter data\n");
    scanf("%d", &temp->data);
    temp->link = NULL;
    
    if(head==NULL)
    {
        head = temp;
    }
    else {
        ptr = head;
        while(ptr->link!=NULL)
        {
            ptr = ptr->link;
        }
        ptr->link = temp;
    }
}

void del_alt()
{
    prev = head;
    next = prev->link;
    while(prev!=NULL && next!=NULL)
    {
        prev->link = next->link;
        free(next);
        prev = prev->link;
        if(prev!=NULL)
        {
            next = prev->link;
        }
    }
}


void display()
{
    ptr = head;
    while(ptr!=NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->link;
    }
}

void main()
{
    int ch;
    while(1)
    {
        printf("\n1.insert\n2.delete every 2nd node\n3.display\n4.exit\n");
        printf("\nenter choice\n");
        scanf("%d", &ch);
        
        switch(ch)
        {
            case 1: insert(); break;
            case 2: del_alt(); break;
            case 3: display(); break;
            case 4: exit(0); break;
        }
    }
    
}

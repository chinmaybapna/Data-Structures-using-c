#include<stdio.h>
struct node {
    int data;
    struct node *link;
};

struct node *last = NULL, *temp, *ptr, *curPtr;

void create()
{
    temp = (struct node * )malloc(sizeof(struct node));
    printf("enter data\n");
    scanf("%d", &temp->data);
    temp->link = NULL;
}

void insertBeg()
{
    create();
    if(last == NULL)
    {
        last = temp;
        last->link = last;
    }
    else {
        temp->link = last->link;
        last->link = temp;
    }
}

void insertEnd()
{
    create();
    if(last == NULL)
    {
        last = temp;
        last->link = last;
    } else {
        temp->link = last->link;
        last->link = temp;
        last = temp;
    }
}

void insertAtAny()
{
    if(last == NULL)
    {
        create();
        last = temp;
        last->link = last;
    }
    else 
    {
        int count = 1, pos, i;
        ptr = last->link;
        while(ptr != last)
        {
            count++;
            ptr = ptr->link;
        }
        printf("enter the Position\n");
        scanf("%d", &pos);
        if(pos == 1)
        {
            insertBeg();
        }
        else if(pos == count+1)
        {
            insertEnd();
        }
        else if(pos>1 && pos<count+1)
        {
            create();
            ptr = last->link;
            for(i=1; i<pos-1; i++)
            {
                ptr = ptr->link;
            }
            temp->link = ptr->link;
            ptr->link = temp;
        }    
    }
}

void deleteBeg()
{
    if(last == NULL)
    {
        printf("list is empty\n");
    } 
    else if(last->link == last)
    {
        last = NULL;
    }
    else {
        ptr = last->link;
        last->link = last->link->link;
        free(ptr);
    }
}

void deleteEnd()
{
    if(last == NULL)
    {
        printf("list is empty\n");
    }
    else if(last->link == last)
    {
        last = NULL;
    }
    else {
        ptr = last->link;
        while(ptr->link != last)
        {
            ptr = ptr->link;
        }
        ptr->link = last->link;
        free(last);
        last = ptr;
    }
}

void deleteAtAny()
{
    if(last == NULL)
    {
        printf("list is empty\n");
    }
    else if(last->link == last)
    {
        last = NULL;
    }
    else
    {
        int count = 1, pos, i;
        ptr = last->link;
        while(ptr != last)
        {
            count++;
            ptr = ptr->link;
        }
        printf("enter the Position\n");
        scanf("%d", &pos);
        if(pos == 1)
        {
            deleteBeg();
        }
        else if(pos == count)
        {
            deleteEnd();
        }
        else if(pos>1 && pos<count)
        {
            pos = last->link;
            for(i=0; i<pos-1; i++)
            {
                curPtr = ptr;
                ptr = ptr->link;
            }
            curPtr->link = ptr->link;
            free(ptr);
        }    
    }
}

void display()
{
    if(last == NULL)
    {
        printf("list is empty\n");
    } else {
        ptr = last->link;
        while(ptr != last)
        {
            printf("%d -> ", ptr->data);
            ptr = ptr->link;
        }
        printf("%d -> ", ptr->data);
    }
}

void main() {
    int ch;
    while(1)
    {
        printf("\n1.Insert at Beginning\n2.Insert at end\n3.Insert at any Position\n4.Delete at Beginning\n5.Delete at End\n6.Delete at any position\n7.Display\n8.Exit\n");
        printf("enter choice : ");
        scanf("%d", &ch);
        
        switch(ch) {
            case 1: insertBeg(); break;
            case 2: insertEnd(); break;
            case 3: insertAtAny(); break;
            case 4: deleteBeg(); break;
            case 5: deleteEnd(); break;
            case 6: deleteAtAny(); break;
            case 7: display(); break;
            case 8: exit(0);
        }
    }
}

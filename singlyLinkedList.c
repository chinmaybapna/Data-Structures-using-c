#include<stdio.h>

struct node {
  int data;
  struct node *link;
};


struct node *temp, *head = NULL, *ptr, *curPtr;

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
    if(head == NULL)
    {
        head = temp;
    }
    else {
        temp->link = head;
        head = temp;
    }
}

void insertEnd()
{
    create();
    ptr = head;
    while(ptr->link != NULL) {
        ptr = ptr->link;
    }
    ptr->link = temp;
}


void insertAtAny() 
{
    if(head == NULL)
    {
        create();
        head = temp;
    }
    else
    {
        int i, pos, count;
        ptr = head;
        while(ptr != NULL)
        {
            count++;
            ptr = ptr->link;
        }
        printf("enter position\n");
        scanf("%d", &pos);
        if(pos == 1) {
            insertBeg();
        }
        else if(pos == count+1) {
            insertEnd();
        }
        
        else if (pos<count+1 && pos>1) {
            create();
            ptr = head;
            for(i=1; i<pos-1; i++) {
                ptr = ptr->link;    
            }
            temp->link = ptr->link;
            ptr->link = temp;
        }    
    }
}


void deleteBeg()
{
    ptr = head;
    head = head->link;
    ptr->link = NULL;
    free(ptr);
}


void deleteEnd()
{
    ptr = head;
    while(ptr->link != NULL) {
        curPtr = ptr;
        ptr = ptr->link;
    }
    curPtr->link = NULL;
    free(ptr);
}

void deleteAtAny()
{
    if(head == NULL)
    {
        printf("list is empty\n");
    }
    else {
        int i, pos, count;
        ptr = head;
        while(ptr != NULL)
        {
            count++;
            ptr = ptr->link;
        }
        printf("enter position\n");
        scanf("%d", &pos);
        if(pos == 1) {
            deleteBeg();
        }
        else if(pos == count) {
            deleteEnd();
        }
        
        else if (pos<count && pos>1) {
            ptr = head;
            for(i=1; i<pos; i++) {
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
    if(head == NULL) {
        printf("List is empty\n");
    } else {
        ptr = head;
        while(ptr != NULL)
        {
            printf("%d -> ", ptr->data);
            curPtr = ptr;
            ptr = ptr->link;
        }
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

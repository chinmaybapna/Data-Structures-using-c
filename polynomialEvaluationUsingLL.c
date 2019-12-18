#include<stdio.h>

struct node {
    int coeff;
    int power;
    struct node *link;
};

struct node *temp, *head = NULL, *ptr, *curPtr;

void insert()
{
    temp = (struct node *)malloc(sizeof(struct node));
    printf("enter coefficient : ");
    scanf("%d", &temp->coeff);
    printf("enter power : ");
    scanf("%d", &temp->power);
    
    if(head == NULL)
    {
        head = temp;
    }
    else if(temp->power >= head->power) {
        temp->link = head;
        head = temp;
    }
    else {
        ptr = head;
        while(ptr!=NULL && ptr->power >= temp->power)
        {
            curPtr = ptr;
            ptr = ptr->link;
            
            if(ptr == NULL)
            {
                curPtr->link = temp;
            }
            else {
                temp->link = curPtr->link;
                curPtr->link = temp;
            }
        }
    }
}

void display()
{
    ptr = head;
    while(ptr != NULL)
    {
        printf("(%d)x^%d ", ptr->coeff, ptr->power);
        ptr = ptr->link;
    }
}

void evaluate()
{
    int x, sum=0;
    if(head == NULL)
    {
        printf("empty\n");
    }
    else
    {
        printf("enter the value of x : ");
        scanf("%d", &x);
        ptr = head;
        while(ptr != NULL)
        {
            sum += (ptr->coeff)*(pow(x,ptr->power));
            ptr = ptr->link;
        }
    }
    printf("result : %d\n", sum);
}

void main()
{
    int ch;
    while(1)
    {
        printf("1.insert\n2.display\n3.evaluate\n4.exit\n");
        printf("enter choice\n");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: insert(); break;
            case 2: display(); break;
            case 3: evaluate(); break;
            case 4: exit(0);
        }
    }
}

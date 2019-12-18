#include<stdio.h>
#define size 3

int cq[size], rear=-1, front=-1, item, i;
void insert()
{
    if(rear==front-1 || front==0 && rear == size-1)
    {
        printf("full\n");
    }
    else
    {
        printf("enter item\n");
        scanf("%d", &item);
        if(front==-1)
        {
            front=0;
        }
        rear = (rear+1)%size;
        cq[rear] = item;
    }
}

void delete()
{
    if(front==-1 && rear==-1)
    {
        printf("empty\n");
    }
    else
    {
        printf("the deleted item is %d\n", cq[front]);
        
        if(front==rear)
        {
            rear=-1;
            front=-1;
        }
        else
        {
            front = (front+1)%size;
        }
        
    }
}

void display()
{
    if(front==-1)
    {
        printf("empty\n");
    }
    else
    {
        for(i=front; i!=rear; i=(i+1)%size)
        {
            printf("%d ", cq[i]);
        }
        printf("%d ", cq[i]);
    }
}



void main()
{
    int ch;
    while(1)
    {
        printf("\n1.insert\n2.delete\n3.display\n4.exit\n");
        printf("enter the choice\n");
        scanf("%d", &ch);
        
        switch(ch)
        {
            case 1: insert(); break;
            
            case 2: delete(); break;
            
            case 3: display(); break;
            
            case 4: exit(0); break;
        }
        
        
    }
}

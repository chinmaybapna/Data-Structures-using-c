#include<stdio.h>
#define size 5

int rear=-1, front=-1, qu[size], i, data, j, delitem;
void insert()
{
    if(rear == size-1)
    {
        printf("queue is full\n");
    }
    else {
        printf("enter the data : \n");
        scanf("%d", &data);
        if(rear==-1 && front==-1)
        {
            rear = 0;
            front = 0;
            qu[rear] = data;
        }
        else {
            check();
            rear++;
        }
    }
}

void check()
{
    for(i=front; i<=rear; i++)
    {
        if(data > qu[i])
        {
            for(j=rear; j>=i; j--)
            {
                qu[j+1] = qu[j];
            }
            qu[i] = data;
            return;
        }
    }
    qu[i] = data;
}
    
void delete()
{
	if(front==-1)
	{
		printf("empty");
	}
	else
	{
		delitem = qu[front];
		printf("deleted item is %d", delitem);
		if(front==rear)
		{
			front=rear=-1;
		}
		else
		{
			front++;
		}
	}
}

void display()
{
	if(rear==-1)
	{
		printf("queue is empty\n");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d -> ",qu[i]);
		}
	}
}

void main()
{
	int ch;
	
	while(1)
	{
	
		printf("\n1:insert\n2:delete\n3:display\n4:exit\n\n");
		printf("enter the operation to be performed\n");
		scanf("%d",&ch);
	
		switch(ch)
		{
			case 1: insert();
			break;

			case 2: delete();
			break;

			case 3: display();
			break;

			case 4: exit(0);
			break;
		}
	}
}

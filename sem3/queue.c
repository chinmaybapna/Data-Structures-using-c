#include<stdio.h>
#include<stdlib.h>
#define size 5
int qu[size],rear=-1,front=-1,delitem,item,i;

void insert()
{
	if(rear==size-1)
	{
		printf("full");
	}
	else
	{
		printf("enter the element:");
		scanf("%d",&item);
	
	
		if(rear==-1 && front==-1)
		{
			rear=front=0;
		}

		else
		{
			rear++;
		}	
		
		qu[rear]=item;
		
	}
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
		printf("queue is empty");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d",qu[i]);
		}
	}
}

void main()
{
	int ch;
	
	while(1)
	{
	
		printf("1:insert\n2:delete\n3:display\n4:exit\n\n");
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
	

























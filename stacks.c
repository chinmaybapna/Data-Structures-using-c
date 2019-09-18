#include<stdio.h>

#define SIZE 4

int s[SIZE],item,top=-1,i;

void push()
{
	if(top==SIZE-1)
		printf("stack is full\n\n");
	else
	{
		printf("enter the element to be pushed:\n");
		scanf("%d",&item);
		s[++top]=item;
	}
}

void pop()
{
	if(top==-1)
		printf("stack is empty");
	else
	{	printf("the element to be popped out is %d\n",s[top]);
		top=top-1;
	}
}

void display()
{
	if(top==-1)
		printf("stack is empty\n\n");
	else
	{
		for(i=0;i<=top;i++)
			printf("%d\n",s[i]);
	}
}


void main()
{
	int ch;
	
	while(1)
	{
	
		printf("1:push\n2:pop\n3:display\n4:exit\n\n");
		printf("enter the operation to be performed\n");
		scanf("%d",&ch);
	
		switch(ch)
		{
			case 1: push();
			break;

			case 2: pop();
			break;

			case 3: display();
			break;

			case 4: exit(0);
			break;
		}
	}
}
	


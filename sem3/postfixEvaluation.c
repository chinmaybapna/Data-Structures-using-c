#include<stdio.h>
char postfix[30],ch;
int num,s[30],top=-1,op1,op2,us,j;
void push(int num)
{
	s[++top]=num;	
}

int pop()
{
	return(s[top--]);
}

void main()
{
	printf("enter the postfix expression:\n");
	gets(postfix);
	
	while(postfix[j]!='\0')
	{
		ch = postfix[j];
		
		if(isalpha(ch))
		{
			printf("enter the number:\n");
			scanf("%d",&num);
			push(num);
		}
		
		else
		{
			op1=pop();
			op2=pop();
		}

	switch(ch)
	{
		case '/':us=op1/op2;
			push(us);
			break;
		
		case '*':us=op1*op2;
			push(us);
			break;

		case '+':us=op1+op2;
			push(us);
			break;

		case '-':us=op1-op2;
			push(us);
			break;
	}
	j++;
	}  
	printf("%d",s[top]);
}

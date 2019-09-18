#include<stdio.h>

#define size 30
char infix[size],postfix[size],ch,top=-1,s[size];

void push(char ch)
{
	s[++top]=ch;	
}
char pop()
{
	return(s[top--]);
}

int precedence(char ch)
{
	switch(ch)
	{
		case '^':return(4);break;
		case '/':
		case '*':return(3);break;
		case '+':
		case '-':return(2);break;
		default :return(1);break;
	}

}

int isoperator(char ch)
{
	if(ch=='^'||ch=='/'||ch=='*'||ch=='+'||ch=='-')
		return(1);
	else
		return(0);
}

void main()
{
	int i=0,j=0,temp;	

	printf("enter the infix equation:\n");
	gets(infix);
	
	while(infix[i]!='\0')
	{
		ch = infix[i];
		
		if(isalpha(ch))
		{
			postfix[j]=ch;
			j++;
		}

		else
			if(ch=='(')
			{
				push(ch);
			}
		else
			if(isoperator(ch))
			{
				if(ch!='^')
					while(top!=-1 && precedence(s[top]>=precedence(ch)))
					{
						postfix[j]=pop();
						j++;
					}
				push(ch);
			}
		else 
			if(ch==')')
			{
				while(s[top]!='(')
				{
					postfix[j]=pop();
					j++;
				}
				
				temp=pop();
			}
		else
		{
			printf("invalid character\n");
		}
		i++;
	}

		while(top>-1)
		{
			postfix[j]=pop();
			j++;
		}
			
	postfix[j]='\0';
	
	printf("the postfix expression is:\n");
		printf("%s\n",postfix);
}



















#include<stdio.h>
#define size 10
char s[size], infix[size], postfix[size], temp, ch;
int top=-1, i=0, j=0;
void push(char ch)
{
    s[++top] = ch;
}

char pop()
{
    return(s[top--]);
}

int isoperator(char ch)
{
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^')   
        return(1);
    else
        return(0);
    
}

int precedence(char ch)
{
    switch(ch)
    {
        case '^': return(4); break;
        case '*':
        case '/': return(3); break;
        case '+': 
        case '-': return(2); break;
        default: return(1); break;
    }
}

 void main()
 {
     printf("enter the infix epxression\n");
     gets(infix);
     while(infix[i] != '\0')
     {
        ch = infix[i];
         
        if(isalnum(ch))
        {
            postfix[j] = ch;
            j++;
        }
        
        else if(ch == '(')
        {
            push(ch);
        }
        
        else if(isoperator(ch))
        {
            if(ch != '^')
            {
                while(top != -1 && precedence(s[top]) >= precedence(ch))
                {
                    postfix[j] = pop();
                    j++;
                }
            }
            
            push(ch);
        }
        
        else if(ch == ')')
        {
            while(s[top] != '(')
            {
                postfix[j] = pop();
                j++;
            }
            temp = pop();
        }
        
        else
        {
            printf("invalid character\n");
        }
        
        i++;
     }
     
     while(top != -1)
     {
         postfix[j] = pop();
         j++;
     }
     postfix[j] = '\0';
     printf("the postfix expression is:\n");
     printf("%s\n",postfix);
 }

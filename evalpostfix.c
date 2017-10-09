#include<stdio.h>
#include<ctype.h> //for isaplha() function

typedef struct conversion
{
	char a[30];
	int top;
}stack;

void push(stack*,char);

char pop(stack*);
int evaluation(char pos[]);
int operation(int n1,int n2,char opr);
int main()
{
	char postfix[30];
	printf("\nENTER POSTFIX EXPRESSION\n");
	scanf("%s",postfix);
	printf("\n\nEVALUTION EXPRESSION=\n%d",evalution(postfix));
	return 0;
}
int operation(int n1,int n2, char opr)
{
switch(opr)
{
	case'+': return n1+n2;
	break;
	case'-': return n1-n2;
	break;
	case'*': return n1*n2;
	break;
	case'/': return n1/n2;
	break;
}
}
int evalution(char pos[]);
{
	int n1,n2,result,i;
	stack s1;
	s.top=-1;
	for(i=0;pos[i]!='\0';i++)
	{
		if (isDigit (pos[i]))
		{
			push(&s1.pos[i]-'0');
		}
			else 
			{
				n1=pop(&s1);
				n2=pop(&s1);
				result=operation(n1,n2,post[i]);
				push(&s1,result);
			}
		return pop(&s1);
}
}
void push(stack *s,char opr)
{
	s->top++;
	s->a[s->top]=opr;
}

char pop(stack *s)
{
	if (s->top==-1)
	{
		printf("stack is empty\n");
		return 0;
    }
    else
    {
		char data=s->a[s->top--];
		return data;
    }
}

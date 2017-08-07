#include<stdio.h>
#include<ctype.h>
#define MAX 100

typedef struct stack
{
	int a[MAX];
	int top;
}stack;

void push(stack *ps,char n)
{
	if(ps->top==MAX-1)
	{
		printf("\nSTACK IS FULL");
	}
	else
	{
		ps->top++;
		ps->a[ps->top]=n;
	}

}

char pop(stack *ps)
{
	return(ps->a[ps->top--]);
}





int ismatchingpair(char left,char right)
{
	switch(left)
	{
		case '(':
			if(right==')')
				return 1;
			else
				return 0;
			break;
		case '{':
			if(right=='}')
				return 1;
			else
				return 0;
			break;
		case '[':
			if(right==']')
			return 1;
			else
			return 0;
			break;
		default: return 0;
	}
}

void checkbalanced(char exp[])
{
int i=0;
char c;
stack s;
s.top=-1;
while(exp[i]!='\0')
{
	if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
		{	
			push(&s,exp[i]);
		}
	else
	{
		if(s.top==-1){
			printf("/n Invalid Expressions/n");
			return;
		}
		c=pop(&s);
		if(ismatchingpair(c,exp[i]))
		{
			i++;
			continue;
		}	
		else{
			printf("\nInvalid Expression");
			return;
		}
	}
	i++;
}
if(s.top==-1)
	printf("Expression valid/n");
else
	printf("Expression Invalid");
}

int main()
{
	char exp[100];
	printf("ENTER An EXPRESSION CONTAINING PARENTHESIS\n");
	scanf("%s",exp);
	checkbalanced(exp);
	return 0;
}

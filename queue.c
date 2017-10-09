#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10

int queue[MAX_SIZE],front=-1,rear=-1;
void display()
{ int i;
	for(i=front;i<=rear;i++)
	printf("%d\t",queue[i]);
	else
	{
		printf("\nQueue is Empty");
	}
}
int isFull(){
	//returns 1 if stack is full else returns -1
	return rear==MAX_SIZE-1&&front==MAX SIZE-1;
	
}

int isEmpty(){
//returns 1 if stack is empty else returns -1
	return rear==-1&&front==-1;
	
}


void insert queue(int d)
{
if (isFull(q))
{
printf("Element cant be inserted\n");
return 0;
}
else
{
queue->rear++;
queue[rear]=d;
if(front==-1)
{
	front++;
}
}
}
void delete queue()
{
	if(isEmpty(q))
	{
		printf("queue is empty");
		return;
		d->queue[front]
		if(q->front==q->rear)
		{
			q->front=q->rear=-1;
		}
		else
		q->front++;
		return d;
	}
int main(){
	int choice,e;
	do
	{
		//display menu 1.Display 2.Insert 3.Delete 4.exit
		printf("\nEnter\n1.display\n2.insert\n3.delete\n4.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);	//take input in choice variable
		switch(choice){
			case 1:
				e=peek();//call peek function
				printf("\nElement at the top of stack is : %d",e);
				break;
			case 2:
				printf("\nEnter the elment to be inserted: ");
				scanf("%d",&e);
				push(e);//call push function
				break;
			case 3:
				pop();//call pop function
				break;
			case 4:
				exit(0);//call exit(0) function or return 0
				break;
			default:
				printf("\nInvalid Choice");//invalid choice
				break;				
		}
	}while(1);
	return 0;
}

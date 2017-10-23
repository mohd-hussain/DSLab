#include<stdio.h>
#include<stdlib.h>
  
typedef struct node
{
int data;
struct node* next;
}sll;


sll* InsertEnd(sll *h,int d)         //function for insertintg a node into the end of Linked list
{
sll *p,*temp;
p=(sll*)malloc(sizeof(sll*));
 if (p==NULL)
{
 printf("Not enough memory space\n");
return h;
}
  p->data=d;
  p->next=NULL;


if(h==NULL)
h=p;
else
{
temp=h;
while(temp->next!=NULL)
temp=temp->next;
temp->next=p;
}
return h;
}

void Display(sll *h)       //function for displaying the data
{
sll *temp;
if(h==NULL)
printf("\nLinked List is Empty\n\n\n");
else
{
temp=h;
printf("\nLinked List is::\n");
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp=temp->next;
}
}
}

sll* InsertAfter(sll *h,int d, int key)   //function for inserting a node into Linked List after the given spcefic possion
{
sll *p,*temp;
p=(sll*)malloc(sizeof(sll*));
  p->data=d;
  p->next=NULL;


if(h==NULL)
h=p;
else
{
temp=h;;

while(temp!=NULL)
{
if(temp->data==key)
{
p->next=temp->next;
temp->next=p;
return h;
}
temp=temp->next;
}
free(p);
if(temp==NULL)
printf("\nNode note found\n");
return h;
}
}

sll* InsertBefore(sll *h,int d, int key)   // function for inserting a node into Linked List before the given specific possition
{
sll *p,*temp;
p=(sll*)malloc(sizeof(sll*));
  p->data=d;
  p->next=NULL;


if(h==NULL)
h=p;
else
{
if(h->data==key)
{
p->next=h;
h=p;
return h;
}
temp=h;
while(temp!=NULL)
{
if(temp->next->data==key)
{
p->next=temp->next;
temp->next=p;
return h;
}
temp=temp->next;
}
if(temp==NULL)
printf("\nNode note found\n");
return h;
}
}


sll* RemoveEnd(sll *h, int d)       //function for deleting a node from the end of Linked list
{
sll *p,*temp;
 if(h==NULL)
{
printf("\nLinked List is Empty\n");
return h;
}
temp=h;
while(temp->next!=NULL)
{
temp=temp->next;
p=temp->next;
temp->next=NULL;
p->next=NULL;
free(p);
return h;
}
}


sll* RemoveAfter(sll *h, int d, int key)   //function for deleting a node from the Linked LIst after the given specific position
{
sll *p,*temp;
 if(h==NULL)
{
printf("\nLinked List is Empty\n");
return h;
}
temp=h;
while(temp!=NULL)
{
if(temp->data==key && temp->next!=NULL)
{
p=temp->next;
temp->next=p->next;
p->next=NULL;
free(p);
return h;
}
temp=temp->next;
}
if(temp==NULL)
{
printf("\nNode note found\n");
return h;
}
}


sll* RemoveBefore(sll *h, int key, int d)    //function for deleting a node from the Linked List before the given specific possition
{
sll *temp, *p;
if(h==NULL)
{
printf("\nLinked List is Empty\n");
return h;
}
temp=h;
if(h->data==key)
{
printf("\n Node Not Found\n");
return h;
}
while(temp!=NULL)
{
if(temp->next->next->data==key)
{
p=temp->next;
temp->next=p->next;
p->next=NULL;
free(p);
return h;
}
temp=temp->next;
}
if(temp->next->data==key)
{
h=temp->next;
temp=temp->next;
free(p);
return h;
}
if(temp==NULL)
printf("\nNode note found\n");
return h;
}


int main()
{
int d, key, ch, ch1, ch2;
sll *head;
head->next=NULL;
while(1)
{
printf("\t\t\tMENU\n\n");
printf("Enter your choice\n\n");
printf("\n1:Insertion\n 2:delete\n 3:Display\n 4:Exit\n");
scanf("%d",&ch);
  
switch(ch)
{
case 1:
printf("\n1:Insert at End\n 2:Insert Before\n 3:Insert After\n");
    scanf("%d",&ch1);
switch(ch1)
{
case 1:printf(" Enter the data\n");
     scanf("%d",&d);
head=InsertEnd(head,d);
break;

case 2: printf(" Enter the data\n");
     scanf("%d",&d);
printf("\nEnter before which data you have to Insert\n");
scanf("%d",&key);
head=InsertBefore(head,d,key);
break;
case 3: printf(" Enter the data\n");
     scanf("%d",&d);
printf("\nEnter after which data you have to Insert\n");
scanf("%d",&key);
head=InsertAfter(head,d,key);
break;
default: printf("\n Invalid choice");
}
  break;
case 2:
printf("\n1:Deletet at End\n 2:Delete Before\n3:Delete After\n");
scanf("%d",&ch2);
switch(ch2)
{
case 1:printf(" Enter the data\n");
     scanf("%d",&d);
head=RemoveEnd(head,d);
break;
case 2:printf(" Enter the data\n");
     scanf("%d",&d);
printf("\nEnter before which data you have to Delete\n");
scanf("%d",&key);
head=RemoveBefore(head,d,key);
break;
case 3:printf(" Enter the data\n");
     scanf("%d",&d);
printf("\nEnter after which data you have to Delete\n");
scanf("%d",&key);
head=RemoveAfter(head,d,key);
break;
default: printf("\nInvalid choice\n");
}
break;

case 3: Display(head);
break;


case 4: exit(0);
break;
 
default: printf("\n Please Enter the correct choice\n");
}
}
}





































































































































































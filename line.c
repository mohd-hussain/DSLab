#include<graphics.h>
#include<stdio.h>

int main()
{
	int gd=DETECT,gm,i,no;
	
detectgraph(&gd,&gm);
	
initgraph(&gd,&gm,NULL);

for(i=5;i<=175;i+=2)
{
	ellipse(320,200,0,360,100,i);
	}
	for(i=5;i<=157;i+=2)
	{
	  
		ellipse(320,200,0,360,i,100);
		}
	scanf("%d",&no);	
		delay(5000);	
	
	closegraph();
	
	getch();
}

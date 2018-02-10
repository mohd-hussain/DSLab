#include<graphics.h>
#include<stdio.h>

int main()
{
	int gd=DETECT,gm,no,i;
	int x,y;
detectgraph(&gd,&gm);
	
initgraph(&gd,&gm,NULL);

	
	
	x=getmaxx();
	y=getmaxy();
		
bar(0,0,x,y);

for(i=5;i<=175;i+=2)
{
	setcolor(RED);
	ellipse(320,200,0,360,100,i);
	
	}
	
	for(i=5;i<=157;i+=2)
	{	
	    setcolor(BLUE);  
		ellipse(320,200,0,360,i,100);
		}
		
	scanf("%d",&no);	
		delay(5000);	
	
	closegraph();
	
	getch();
}

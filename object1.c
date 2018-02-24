#include<graphics.h>
#include<stdio.h>

int main()
{
	int gd=DETECT,gm,no,x;
	
      detectgraph(&gd,&gm);
	
       initgraph(&gd,&gm,NULL);

x=getmaxx();


setcolor(WHITE);

line(0,400,x,400);              // Base horizontal line of the figure 

//setcolor(MAGENTA);
rectangle(150,150,450,400);    //outside rectangle






//setcolor(YELLOW);
rectangle(240,250,360,400);    //inside rectangle

rectangle(250,260,350,400);    //insides in insides rectangle

rectangle(260,270,290,340);
rectangle(260,270,292,342);    //design  of door(up)
rectangle(310,270,338,340);    
rectangle(310,270,340,342);

rectangle(260,355,290,390);
rectangle(260,355,292,392);    //design of door(below)
rectangle(310,355,338,390);
rectangle(310,355,340,392);


line(150,391,240,391);
line(360,391,450,391);       //horizontal lines (door)

line(299,260,299,400);
line(301,260,301,400);       //design of door
line(250,350,350,350);

//setcolor(BLUE);
rectangle(170,170,250,220);     //left window
line(170,195,250,195);          //horizontal line
line(210,170,210,220);          //vertical line  

//setcolor(BLUE);
rectangle(350,170,430,220);     //right window
line(350,195,430,195);          //horizontal line
line(390,170,390,220);          //vertical line




//setcolor(GREEN);
line(70,150,530,150);         //corners  of the roof



//setcolor(GREEN);
line(70,150,200,50);          //left slant edge





line(530,150,400,50);         //right slant edge




line(200,50,400,50);         //top of the roof


line(175,70,425,70);      //1
line(148,90,452,90);      //2     horizontal lines
line(123,110,477,110);    //3
line(98,130,502,130);    //4


line(200,50,200,70);     
line(200,90,200,110);     // left side vertical lines
line(200,130,200,150);


line(400,50,400,70);
line(400,90,400,110);    // right side vertical lines
line(400,130,400,150);


line(300,50,300,70);
line(250,70,250,90);
line(350,70,350,90);
line(300,90,300,110);
line(150,110,150,130);     // Remaining vertical lines or design of roof
line(250,110,250,130);
line(350,110,350,130);
line(450,110,450,130);
line(115,130,115,150);
line(300,130,300,150);
line(470,130,470,150);

     

//setcolor(RED);
rectangle(40,20,560,400);    //boundry of the figure
//floodfill(200,200,RED);





scanf("%d",&no);	
		delay(1000);	
	getch();
	closegraph();
	return 0;
	
}

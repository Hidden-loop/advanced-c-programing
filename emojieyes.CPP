#include<graphics.h>
#include<stdio.h>
#include<conio.h>

void main()
{
 int gd= DETECT,gm;
 initgraph(&gd,&gm, "C:\TurboC++\Disk\TurboC3\BGI");
 setcolor(RED);
 int x=220,y=230;
 //outtextxy(x,y,"kaizoku ou ni ore wa naru!");
 setcolor(BROWN);

 rectangle(310,240,210,140);
 pieslice(310,240,90,180,100);

 rectangle(430,240,330,140);
 pieslice(430,240,90,180,100);

 circle(320,240,150);
 getch();
}
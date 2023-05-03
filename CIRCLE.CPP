#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int gd= DETECT,gm;
initgraph(&gd,&gm,"");
int theta;
int x,y;
int r=100;
for(theta=1;theta<=180;theta++)
{
x=r*sin(theta);
y=r*cos(theta);
putpixel(x+320,y+240,3);
}

 getch();
closegraph();
}
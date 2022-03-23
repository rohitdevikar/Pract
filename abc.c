#include <stdlib.h>
#include "graphics.h"

int main()
{
  int gdriver,gmode,x,y,x1,y1,x2,y2,dx,dy,i,length;
  float Dx,Dy;
 printf("Enter the starting points ");
scanf("%d%d",&x1,&y1);
printf("Enter the ending point");
scanf("%d%d",&x2,&y2);
gdriver = VGA;gmode=VGAMAX;
  initgraph(&gdriver,&gmode,"Z");
dx=x2-x1;
dy=y2-y1;
Dx=(x2-x1)/length;
 Dy=(y2-y1)/length;
if(dx>dy)
  {
    length=dx;
  }
 else
{ 
 length=dy;
}
 setcolor(RED);
 putpixel(x1,y1,RED);
 i=0;
while(i<=length)
 {
  x=(x1+i)+Dx;
  y=(y1+i)+Dy;
  putpixel(x,y,RED);
  i++;
 }
getch();
closegraph();
return (0);
}

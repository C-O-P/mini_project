#include<iostream.h>
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<sstream.h>
void main()
{
int seats = 108;
int gd = DETECT , gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
cout << " number of seats available is = " << seats << endl;
delay(3000);
clrscr();
setcolor(BLUE);
setbkcolor(RED);
setfillstyle(SOLID_FILL,BLUE);
/*Draw seats of a theatre as square boxes */
for(int j = 10 ; j < getmaxy()-50 ; j+=50)
{
       int count=0;

	for(int i = 10 ; i < getmaxx()-50 ; i+=50)
	{ count++;
	  setfillstyle(SOLID_FILL, BLUE);
	  //textbackground(RED);
	  bar(i , j , i + 30 , j + 30);
	  rectangle(i , j , i + 30 , j + 30);
	  setcolor(15);
	  moveto( i+15 , j+15 );
	  outtext(str);
	}
}

delay(30000);
closegraph();
}

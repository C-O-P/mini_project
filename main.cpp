#include<iostream.h>
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
#include<stdio.h>
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
	char buff[1];
	double c = 0;
for(int j = 10 ; j < getmaxy()-50 ; j+=60)
{
	for(int i = 10 ; i < getmaxx()-50 ; i+=50)
	{
	  c++;
	  gcvt(c ,3 , buff);
	//  memset(buff , c , 0);
	  setfillstyle(SOLID_FILL, BLUE);
	  //textbackground(RED);
	  bar(i , j , i + 35 , j + 35);
	  rectangle(i , j , i + 35 , j + 35);
	  setcolor(15);
	  moveto( i+16 , j+16 );
	 // cout << c;
	  outtext(buff);
	// print_seat_number(c , i , j);
	}
}

delay(20000);
closegraph();
}

#include<iostream.h>
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
#include<stdio.h>
void main()
{
int total_seats = 84 , total_seats_to_be_booked , display_time , total_seats_booked = 0;
int gd = DETECT , gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
clrscr();
cout << " number of seats available is = " << total_seats << endl;
cout << "Enter number of you want to book " << endl;
cout << "enter total number of display time " << endl;
cin >> display_time;
total_seats_booked += total_seats_to_be_booked;
display_time = display_time * 1000;
cin >> total_seats_to_be_booked;
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

delay(display_time);
clrscr();
int seat_number;
int seats[84];
memset(seats , 0 , 84);
cout << "enter seat numbers you to book " << endl;
for(int i = 0 ; i < total_seats_to_be_booked ; i++)
{
	cin >> seat_number;
	seats[seat_number] = 1;
}
getch();
closegraph();
}

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
//int gd = DETECT , gm;
//initgraph(&gd,&gm,"c:\\turboc3\\bgi");
clrscr();
cout << " number of seats available is = " << total_seats << endl;
cout << "Enter number of seats you want to book " << endl;
cout << "enter total number of display time " << endl;
cin >> display_time;
total_seats_booked += total_seats_to_be_booked;
display_time = display_time * 1000;
cin >> total_seats_to_be_booked;
//delay(3000);
getch();
clrscr();
int gd = DETECT , gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
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
getch();
closegraph();
clrscr();
int seat_number;
int seats[84];
memset(seats , 0 , 84);
cout << "enter seat numbers you to book " << endl;
for(int i = 0 ; i < total_seats_to_be_booked ; i++)
{
	cout << "seat number " << i + 1 << endl;
	cin >> seat_number;
	seats[seat_number] = 1;
}
getch();
clrscr();
gd = DETECT;
initgraph(&gd , &gm , "c:\\turboc3\\bgi");
int k = 0;
setcolor(BLUE);
setbkcolor(RED);
for(int p = 10 ; p < getmaxy()-50 ; p+=60)
{
	for(int i = 10 ; i < getmaxx()-50 ; i+=50)
	{
	  k++;
	  gcvt(k ,3 , buff);
	  if(seats[k] == 1)
	  {
		setfillstyle(SOLID_FILL,GREEN);
	  }
	  else
	  {
		setfillstyle(SOLID_FILL, BLUE);
	  }
	  bar(i , p , i + 35 , p + 35);
	  rectangle(i , p , i + 35 , p + 35);
	  setcolor(15);
	  moveto( i+16 , p+16 );
	  outtext(buff);
	}
}
//delay(display_time);
getch();
closegraph();
}

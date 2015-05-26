/**All Bugs Cleared
***Developed in PES COLLEGE OF ENGINEERING, MANDYA***
***nice indentation***
***Graphics learned***
***BOOK IT***
***NO PRACTICAL APPLICATIONS***
*/
#include<iostream.h>
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
#include<stdio.h>
char g=196;
int A;
void welcome_screen()
{       int gd=DETECT,gm;
	 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	setbkcolor(BLUE);
	for(A=0;A<=79;A++)
	cout<<g;
	cout << "\t\t\tWELCOME TO THE BOOK IT \n";
	for(A=0;A<=79;A++)
	cout<<g;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	int choice;
	cout<<"\t\t1.Continue\n\n\n\t\t2.Back\n";
	cout<<"\n\n\t\tEnter your choice\t";
	cin>>choice;
	if(choice==2)
	exit(0);
	else
	cout<<"\t\t\n\nPress any key to continue the process\n";
	getch();
	}
void exit_program(int t)
{
if(!t)
exit(0);
}
void main()
{
int total_seats = 84 , total_seats_to_be_booked , display_time , total_seats_booked = 0;
//int gd = DETECT , gm;
//initgraph(&gd,&gm,"c:\\turboc3\\bgi");
clrscr();
welcome_screen();
closegraph();
clrscr();
int gd = DETECT , gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setbkcolor(GREEN);
for(A=0;A<=79;A++)
cout<<g;
cout << "\n\t\t\tTotal number of seats available is " << total_seats << endl;
for(A=0;A<=79;A++)
cout<<g;
cout<<endl;
cout << "\nEnter number of seats you want to book " << endl;
cin>>total_seats_to_be_booked;
exit_program(total_seats_to_be_booked);
//cout << "\nEnter total number of display time " << endl;
//cin >> display_time;
total_seats_booked += total_seats_to_be_booked;
//display_time = display_time * 1000;
//cin >> total_seats_to_be_booked;
//delay(3000);

getch();
closegraph();
clrscr();
int graphics_driver = DETECT , graphics_mode;
initgraph(&graphics_driver,&graphics_mode,"c:\\turboc3\\bgi");
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
//delay(display_time);
getch();
closegraph();
clrscr();
int seat_number;
int seats[84];
memset(seats , 0 , 85);
//gd = DETECT , gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setbkcolor(BLUE);
cout << "Enter seat numbers you want to book " << endl;
for(int i = 0 ; i < total_seats_to_be_booked ; i++)
{
	cout << "Seat number " << i + 1 << endl;
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
for(int p = 10 ; p <= getmaxy()-50 ; p+=60)
{
	for(int i = 10 ; i <= getmaxx()-50 ; i+=50)
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

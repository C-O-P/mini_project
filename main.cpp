<<<<<<< HEAD
<<<<<<< HEAD
/**Many Bugs Cleared
***Developed in PES COLLEGE OF ENGINEERING, MANDYA***
***nice indentation and implementation***
***Graphics learned***
***BOOK IT***
***NO PRACTICAL APPLICATIONS***
***Codes Rearranged***
***@4 A.M. && That's it***
=======
/**All Bugs Cleared
=======
/**Many Bugs Cleared
>>>>>>> 6d487d8f405f636ebc8e50276400913e64d495a0
***Developed in PES COLLEGE OF ENGINEERING, MANDYA***
***nice indentation and implementation***
***Graphics learned***
***BOOK IT***
***NO PRACTICAL APPLICATIONS***
<<<<<<< HEAD
>>>>>>> origin/master
=======
***Codes Rearranged***
***@4 A.M. && That's it***
>>>>>>> 6d487d8f405f636ebc8e50276400913e64d495a0
*/
#include<iostream.h>
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
#include<stdio.h>
<<<<<<< HEAD
<<<<<<< HEAD
int seat_number , book_count = 0;
int seats[90];
//memset(seats , 0 , 90);
char g=196;
int A;
int count_cancel , count_booked;
int total_seats = 84 , total_seats_to_be_booked = 0 , total_seats_to_be_cancelled , display_time , total_seats_booked = 0;
void instruction()
{    int gc=DETECT,gr;
	 initgraph(&gc,&gr,"c:\\turboc3\\bgi");
	 setbkcolor(GREEN);
	 setcolor(BLUE);
	 cout<<"\t\tRead the instuctions carefully before proceeding\n";
	 cout<<endl;
	 getch();
	 for(A=0;A<79;A++)
	 cout<<g;
	 cout<<endl;
	 cout<<"\t\t\t     INSTRUCTIONS\n";
	 for(A=0;A<79;A++)
	 cout<<g;
	 cout<<endl;
	 cout<<"1.\tTickets once booked can be cancelled agin.\n\n\n";
	 cout<<"2.\tBooked seats cannot be booked again.\n\n\n";
	 cout<<"3.\tFree seats doesn't needs to be cancelled.\n\n\n";
	 cout<<"\n\n";
	 cout<<"\t\t\t\tThank you\n";
	 getch();
	 closegraph();



}
void welcome_screen()
{       int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	setbkcolor(BLUE);
	for(A=0;A<=79;A++)
	cout<<g;
	cout << "\t\t\t     WELCOME TO THE BOOK IT \n";
	for(A=0;A<=79;A++)
	cout << g;
	cout << endl;
	cout << endl;
	cout << "\t\t       PES COLLEGE OF ENGINEERING, MANDYA \n";
=======
=======
int seat_number , book_count = 0;
int seats[90];
//memset(seats , 0 , 90);
>>>>>>> 6d487d8f405f636ebc8e50276400913e64d495a0
char g=196;
int A;
int count_cancel , count_booked;
int total_seats = 84 , total_seats_to_be_booked = 0 , total_seats_to_be_cancelled , display_time , total_seats_booked = 0;
void instruction()
{    int gc=DETECT,gr;
	 initgraph(&gc,&gr,"c:\\turboc3\\bgi");
	 setbkcolor(GREEN);
	 setcolor(BLUE);
	 cout<<"\t\tRead the instuctions carefully before proceeding\n";
	 cout<<endl;
	 getch();
	 for(A=0;A<79;A++)
	 cout<<g;
	 cout<<endl;
	 cout<<"\t\t\t     INSTRUCTIONS\n";
	 for(A=0;A<79;A++)
	 cout<<g;
	 cout<<endl;
	 cout<<"1.\tTickets once booked can be cancelled agin.\n\n\n";
	 cout<<"2.\tBooked seats cannot be booked again.\n\n\n";
	 cout<<"3.\tFree seats doesn't needs to be cancelled.\n\n\n";
	 cout<<"\n\n";
	 cout<<"\t\t\t\tThank you\n";
	 getch();
	 closegraph();



}
void welcome_screen()
{       int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	setbkcolor(BLUE);
	for(A=0;A<=79;A++)
	cout<<g;
<<<<<<< HEAD
	cout << "\t\t\tWELCOME TO THE BOOK IT \n";
>>>>>>> origin/master
=======
	cout << "\t\t\t     WELCOME TO THE BOOK IT \n";
	for(A=0;A<=79;A++)
	cout << g;
	cout << endl;
	cout << endl;
	cout << "\t\t       PES COLLEGE OF ENGINEERING, MANDYA \n";
>>>>>>> 6d487d8f405f636ebc8e50276400913e64d495a0
	for(A=0;A<=79;A++)
	cout<<g;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	int choice;
<<<<<<< HEAD
<<<<<<< HEAD
	cout<<"\t\t1.Start booking seats now\n\n\n\t\t2.Go Back and think again\n";
=======
	cout<<"\t\t1.Continue\n\n\n\t\t2.Back\n";
>>>>>>> origin/master
=======
	cout<<"\t\t1.Start booking seats now\n\n\n\t\t2.Go Back and think again\n";
>>>>>>> 6d487d8f405f636ebc8e50276400913e64d495a0
	cout<<"\n\n\t\tEnter your choice\t";
	cin>>choice;
	if(choice==2)
	exit(0);
	else
	cout<<"\t\t\n\nPress any key to continue the process\n";
	getch();
	}
void exit_program(int t)
<<<<<<< HEAD
{
if(!t)
exit(0);
}

void show_empty_theatre()
{

	int graphics_driver = DETECT , graphics_mode;
	initgraph(&graphics_driver,&graphics_mode,"c:\\turboc3\\bgi");
	setcolor(BLUE);
	setbkcolor(RED);
	setfillstyle(SOLID_FILL,BLUE);
=======
{
if(!t)
exit(0);
}

void show_empty_theatre()
{

<<<<<<< HEAD
getch();
closegraph();
clrscr();
int graphics_driver = DETECT , graphics_mode;
initgraph(&graphics_driver,&graphics_mode,"c:\\turboc3\\bgi");
setcolor(BLUE);
setbkcolor(RED);
setfillstyle(SOLID_FILL,BLUE);
>>>>>>> origin/master
=======
	int graphics_driver = DETECT , graphics_mode;
	initgraph(&graphics_driver,&graphics_mode,"c:\\turboc3\\bgi");
	setcolor(BLUE);
	setbkcolor(RED);
	setfillstyle(SOLID_FILL,BLUE);
>>>>>>> 6d487d8f405f636ebc8e50276400913e64d495a0
/*Draw seats of a theatre as square boxes */
	char buff[1];
	double c = 0;
	for(int j = 10 ; j < getmaxy()-50 ; j+=60)
<<<<<<< HEAD
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
	getch();
	closegraph();
}
void display_booked_seats(int seats[])
{
	int gd = DETECT , gm;
	char buff[1];
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
	clrscr();
}
int getinfo()
{
	total_seats_to_be_booked = 0;
	int gd = DETECT , gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	setbkcolor(GREEN);
	for(A=0;A<=79;A++)
	cout<<g;
	cout << "\n\t\t\tTotal number of seats in theatre " << total_seats << endl;
	for(A=0;A<=79;A++)
	cout<<g;
	cout<<endl;
	cout << "\nEnter number of seats you want to book " << endl;
	cin>>total_seats_to_be_booked;
	total_seats = total_seats - total_seats_to_be_booked;
	exit_program(total_seats_to_be_booked);
	total_seats_booked += total_seats_to_be_booked;
	getch();
	closegraph();
	clrscr();
	return total_seats_booked;
}
void seat_booking()
{
	//total_seats_to_be_booked = 0;
	count_booked = 0;
	int gd = DETECT , gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	setbkcolor(BLUE);
	cout << "Enter seat numbers you want to book " << endl;
	for(int i = 0 ; i < total_seats_to_be_booked ; i++)
	{
		cout << "Seat number " << i + 1 << endl;
		cin >> seat_number;
		count_booked++;
		if(seats[seat_number] == 1)
		{
			cout << "\nSeat is already booked"<<endl;
			i--;
			//count_booked--;
			continue;
		}
		seats[seat_number] = 1;
	}
	//total_seats = total_seats - count_booked + count_cancel;
	getch();
	clrscr();
}
void seat_cancellation()
{
	total_seats_to_be_cancelled = 0;
	int gd = DETECT , gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	setbkcolor(BLUE);
	cout << "Enter number of seats to be cancelled "<<endl;
	cin >> total_seats_to_be_cancelled;
	total_seats=total_seats + total_seats_to_be_cancelled;
	cout << "Enter seat numbers you want to cancel " << endl;
	for(int i = 0 ; i < total_seats_to_be_cancelled ; i++)
	{
		cout << "Seat number " << i + 1 << endl;
		cin >> seat_number;
		count_cancel++;
		if(seats[seat_number] == 0)
		{
			cout << "\nSeat is already free"<<endl;
			//count_cancel--;
			total_seats--;
			continue;
		}
		seats[seat_number] = 0;
	}
	//total_seats = total_seats + count_cancel - count_booked;
	getch();
	clrscr();
}
<<<<<<< HEAD
void main()
{
//int total_seats = 84 , total_seats_to_be_booked = 0 , display_time , total_seats_booked = 0;
//int gd = DETECT , gm;
//initgraph(&gd,&gm,"c:\\turboc3\\bgi");
memset(seats , 0 , 90);

clrscr();
instruction();
welcome_screen();
closegraph();
clrscr();
/******************************
*********************//////////////
getinfo();

show_empty_theatre();
int user_choice = 4;
while(1)
{
	if(user_choice == 3)
	break;
	else if(user_choice == 2 && book_count > 0)
	{
		display_booked_seats(seats);
		seat_cancellation();
	}

	else if(user_choice == 1 && book_count > 0)
	{
		display_booked_seats(seats);
		getinfo();
		seat_booking();
	}
	else
	seat_booking();
/*******display_booked_seats**********

*******************************************/
	display_booked_seats(seats);
	book_count++;
	int gd =DETECT , gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	setbkcolor(BLUE);
	textcolor(GREEN);
	for(A=0;A<79;A++)
	cout<<g;
	cout<<"\n";
	cout <<"\t\tThank you for booking\n";
	for(A=0;A<79;A++)
	cout<<g;

	cout << "\n\t\t\t1.BOOK AGAIN\n\n\t\t\t2.CANCEL BOOKINGS\n\n\t\t\t3.THAT'S IT\n\n";
	cout<<"\n\t\tEnter your choice\t\t";
	cin >> user_choice;
	closegraph();
}

=======
=======
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
	getch();
	closegraph();
}
void display_booked_seats(int seats[])
{
	int gd = DETECT , gm;
	char buff[1];
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
>>>>>>> 6d487d8f405f636ebc8e50276400913e64d495a0
//delay(display_time);
	getch();
	closegraph();
	clrscr();
}
int getinfo()
{
	total_seats_to_be_booked = 0;
	int gd = DETECT , gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	setbkcolor(GREEN);
	for(A=0;A<=79;A++)
	cout<<g;
	cout << "\n\t\t\tTotal number of seats in theatre " << total_seats << endl;
	for(A=0;A<=79;A++)
	cout<<g;
	cout<<endl;
	cout << "\nEnter number of seats you want to book " << endl;
	cin>>total_seats_to_be_booked;
	total_seats = total_seats - total_seats_to_be_booked;
	exit_program(total_seats_to_be_booked);
	total_seats_booked += total_seats_to_be_booked;
	getch();
	closegraph();
	clrscr();
	return total_seats_booked;
}
void seat_booking()
{
	//total_seats_to_be_booked = 0;
	count_booked = 0;
	int gd = DETECT , gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	setbkcolor(BLUE);
	cout << "Enter seat numbers you want to book " << endl;
	for(int i = 0 ; i < total_seats_to_be_booked ; i++)
	{
		cout << "Seat number " << i + 1 << endl;
		cin >> seat_number;
		count_booked++;
		if(seats[seat_number] == 1)
		{
			cout << "\nSeat is already booked"<<endl;
			i--;
			//count_booked--;
			continue;
		}
		seats[seat_number] = 1;
	}
	//total_seats = total_seats - count_booked + count_cancel;
	getch();
	clrscr();
}
void seat_cancellation()
{
	total_seats_to_be_cancelled = 0;
	int gd = DETECT , gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	setbkcolor(BLUE);
	cout << "Enter number of seats to be cancelled "<<endl;
	cin >> total_seats_to_be_cancelled;
	total_seats=total_seats + total_seats_to_be_cancelled;
	cout << "Enter seat numbers you want to cancel " << endl;
	for(int i = 0 ; i < total_seats_to_be_cancelled ; i++)
	{
		cout << "Seat number " << i + 1 << endl;
		cin >> seat_number;
		count_cancel++;
		if(seats[seat_number] == 0)
		{
			cout << "\nSeat is already free"<<endl;
			//count_cancel--;
			total_seats--;
			continue;
		}
		seats[seat_number] = 0;
	}
	//total_seats = total_seats + count_cancel - count_booked;
	getch();
	clrscr();
}
void main()
{
//int total_seats = 84 , total_seats_to_be_booked = 0 , display_time , total_seats_booked = 0;
//int gd = DETECT , gm;
//initgraph(&gd,&gm,"c:\\turboc3\\bgi");
memset(seats , 0 , 90);

clrscr();
instruction();
welcome_screen();
closegraph();
<<<<<<< HEAD
goto start_again;
>>>>>>> origin/master
=======
clrscr();
/******************************
*********************//////////////
getinfo();

show_empty_theatre();
int user_choice = 4;
while(1)
{
	if(user_choice == 3)
	break;
	else if(user_choice == 2 && book_count > 0)
	{
		display_booked_seats(seats);
		seat_cancellation();
	}

	else if(user_choice == 1 && book_count > 0)
	{
		display_booked_seats(seats);
		getinfo();
		seat_booking();
	}
	else
	seat_booking();
/*******display_booked_seats**********

*******************************************/
	display_booked_seats(seats);
	book_count++;
	int gd =DETECT , gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	setbkcolor(BLUE);
	textcolor(GREEN);
	for(A=0;A<79;A++)
	cout<<g;
	cout<<"\n";
	cout <<"\t\tThank you for booking\n";
	for(A=0;A<79;A++)
	cout<<g;

	cout << "\n\t\t\t1.BOOK AGAIN\n\n\t\t\t2.CANCEL BOOKINGS\n\n\t\t\t3.THAT'S IT\n\n";
	cout<<"\n\t\tEnter your choice\t\t";
	cin >> user_choice;
	closegraph();
}

>>>>>>> 6d487d8f405f636ebc8e50276400913e64d495a0
}

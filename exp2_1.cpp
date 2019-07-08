#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
char ans;
int bill, hours;

cout<<"Package A: For P995/mo 10 hrs of access are provided. Additional hours are P20/hr.\n";
cout<<"Package B: For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr.\n";
cout<<"Package C: For P1995/mo of unlimited access is provided.\n\n";

cout<<"Enter the letter of the package you availed to compute for your bill: ";
cin>>ans;
cout<<"Enter number of hours internet was used: ";
cin>>hours;

switch (ans)
{
	case 'a':
	case 'A':
		if (hours<=10)
		bill = 995;
		else if (hours>10)
		bill = 995 + (hours-10)*20;
		break;
	
	case 'b':
	case 'B':
		if (hours<=20)
		bill = 1495;
		else if (hours>20)
		bill = 1495 + (hours-20)*10;
		break;
		
	case 'c':
	case 'C':
		bill = 1995;
		break;
		
		default:
		cout<<"Invalid input...Please try again.";
	}
	
	cout<<"\n";
	cout<<"Your total monthly bill is P"<<bill<<".";
	
	getch();
	return 0;
}




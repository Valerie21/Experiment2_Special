#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int counter;
	
	cout<<"Counting...\n";
	
	for (counter=1; counter<=10; counter++)
	{
	cout<<counter<<", ";
	}
	for (counter=12; counter<=28; counter+=2)
	{
		cout<<counter<<", ";
		if (counter==28)
		cout<<"30";
		continue;
	}
	
	getch();
	return 0;		
}


#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
int num;
	do
	{

	int num1=1, num2=0;	
	
	cout<<"Enter a number: ";
	cin>>num;
		
	if (num<=0)
	cout<<"Thank you!";
	
	else
	{
		do
		{
		num2 = num2 + num1;
		num1 = num1 + 1;
		
		}
		
	while(num1<=num);
	cout<<"The sum of all whole numbers from 1 to "<<num<<" is "<<num2<<".\n";
		
	}	
}
while(num>0);

getch();
return 0;
}

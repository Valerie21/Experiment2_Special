#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
int gallons;
double bill, unpaid;

cout<<"Please enter the following information to compute your monthly water bill:\n";
cout<<"Total gallons consumed: ";
cin>>gallons;
cout<<"Unpaid balance: ";
cin>>unpaid;
cout<<"\n";

if (unpaid>0)
bill = 35 + (gallons*1.10) + unpaid + 20;
else 
bill = 35 + (gallons*1.10);

cout<<"Your monthly water bill is P"<<bill<<".";

getch();
return 0;
}

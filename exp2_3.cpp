#include<iostream>
#include<conio.h>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	int x, y;
	double V;
	const double z = 2.25;
	
	cout<<fixed<<showpoint<<setprecision(2);
	
	cout<<"Please enter values for x and y.\n";
	cout<<"x: ";
	cin>>x;
	cout<<"y: ";
	cin>>y;
	
		switch (x)
		{
		case '1':
			if (1<y<5)
			V = x*y*z;
			else if (y>=5)
			V = x + (y/z);
			break;
			
		case '2':
			if (y<=5)
			V = abs((x-y)/z);
			else if (y>5)
			V = x - sqrt(y+z);
			break;
			
		default: V = x +y +z;
		}

	cout<< "V = "<<V;
	
	getch();
	return 0;
}

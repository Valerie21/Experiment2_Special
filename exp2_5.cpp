#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
int num1=0, num2=1, sum;

cout<<"Fibonacci numbers: \n";

sum = num1 + num2;

cout<<num1<<","<<num2<<",";

while(sum<=10946)
{cout<<sum<<",";
num1=num2;
num2=sum;
sum=num1+num2;

}



getch();
return 0;
}

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void divide(double x, double y);
void divide(double x, double y)
{
	try{
		if(y==0.0)
			throw y;
		else
			cout<<"\nResult of x/y is: "<<x/y;	
	}
	catch(double)
	{
		cout<<"Caught exception in divide function.";
		throw;			//rethrowing double
	}
		
}
int main()
{
	double a,b;
	cout<<"Enter two numbers: ";
	cout<<"\nValue of a: ";
	cin>>a;
	cout<<"Value of b: ";
	cin>>b;
	
	try
	{
		divide(a,b);
			
	}
	catch(double i)
	{
		cout<<"\nCaught exception in main.";
	}
	
	getch();
	return 0;
}

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter two numbers: ";
	cout<<"\nValue of a: ";
	cin>>a;
	cout<<"Value of b: ";
	cin>>b;
	int sum=a+b;
	int mul=a*b;
	try
	{
		if(b!=0)
			cout<<"\nResult of a/b is: "<<a/b;
		else 
			throw(b);
			
	}
	catch(int i)
	{
		cout<<"\nException Caught denominator is 0 cannot perform a/b";
	}
	try
	{
		if(sum!=0)
			cout<<"\nResult of a+b is: "<<sum;
		else 
			throw(sum);
			
	}
	catch(int s)
	{
		cout<<"\nException Caught Sum is 0";
	}
	
	try
	{
		if(mul!=0)
			cout<<"\nResult of a*b is: "<<mul;
		else 
			throw(mul);
			
	}
	catch(int m)
	{
		cout<<"\nException Caught Multiplication is 0";
	}	
	getch();
	return 0;
}

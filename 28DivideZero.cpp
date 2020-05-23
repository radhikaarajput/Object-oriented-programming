#include<iostream>
#include<conio.h>
#include<stdlib.h>
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
		exit(0);
	}
	
	getch();
	return 0;
}

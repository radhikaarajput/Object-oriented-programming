 #include<conio.h>
#include<iostream>
using namespace std;
void fib(int n);
int main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<"Series is: ";
	fib(n);
	getch();
	return 0;
}

void fib(int n)
{
	int a=0,b=1,c,i;
	cout<<a<<" "<<b<<" ";
	for(i=2;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		cout<<c<<" ";
	}
}

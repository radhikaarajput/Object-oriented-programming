#include<iostream>
#include<conio.h>
using namespace std;
void swapcallBYvalue(int x, int y); 
void swapcallBYreference(int& x, int &y);
void swapcallBYreferenceUsingPointer(int*, int*); 
int main() 
{ 
	int a,b;
	cout<<"Enter two values: ";
	cin>>a>>b;
	swapcallBYvalue(a,b);
	cout<<"Call By value (values are): "<<a<<" "<<b<<endl;
	swapcallBYreference(a,b);
	cout<<"\nCall By reference (values are): "<<a<<" "<<b;
	swapcallBYreferenceUsingPointer(&a,&b);
	cout<<"\nCall By reference Using Pointers(values are): "<<a<<" "<<b;
	getch();
	return 0; 
} 

void swapcallBYvalue(int x, int y) 
{ 
	int t; 

	t = x; 
	x = y; 
	y = t; 
} 

void swapcallBYreference(int& x, int &y) 
{ 
	int t; 

	t = x; 
	x = y; 
	y = t; 
} 

void swapcallBYreferenceUsingPointer(int* x, int* y) 
{ 
	int t; 

	t = *x; 
	*x = *y; 
	*y = t;
}


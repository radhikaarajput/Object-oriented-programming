#include<iostream>
#include<conio.h>
using namespace std;
void swapcallBYvalue(int x, int y); 
void swapcallBYreference(int& x, int &y);
void swapReferenceUsingPointers (int *x, int *y);
int main() 
{ 
	int a,b;
	cout<<"Enter two values: ";
	cin>>a>>b;
	swapcallBYvalue(a,b);
	cout<<"Call By value (values are): "<<a<<" "<<b<<endl;
	swapcallBYreference(a,b);
	cout<<"Call By reference (values are): "<<a<<" "<<b;
	swapReferenceUsingPointers(&a,&b);
	cout<<"\nCall By reference Using Pointers (values are): "<<a<<" "<<b;
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

void swapReferenceUsingPointers (int* x, int* y)
{
	int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

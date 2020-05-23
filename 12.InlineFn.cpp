#include <iostream> 
#include<conio.h>
using namespace std; 
inline int area(int s) 
{ 
	return s*s; 
} 
int main() 
{ 
	int s;
	cout<<"Enter side of Square: ";
	cin>>s;
	cout << "Area of Square is: " << area(s); 
	getch();
	return 0; 
} 

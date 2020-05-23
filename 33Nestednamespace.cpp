#include<conio.h>
#include <iostream> 
using namespace std; 

int x = 20; 

namespace outer 
{ 
	int x = 10;		 
	namespace inner 
	{ 
		int z = x+1; 
	} 
} 

int main() 
{ 
	cout<<"value of z is: "<<outer::inner::z<<endl; 
	cout<<"Value of x is: "<<outer::x;
	getch();
	return 0; 
} 

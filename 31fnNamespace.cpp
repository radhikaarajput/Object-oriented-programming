#include<conio.h>
#include <iostream> 
using namespace std; 
 
namespace f1 
{ 
	int x=2;
	
	int value() 
	{ 
		return x; 
	} 
} 
namespace f2 
{ 
	const double x = 100; 
	double value() 
	{ 
		return 2*x; 
	} 
} 

int main() 
{ 
	cout <<"In Namespace f1 x: "<< f1::value() << '\n'; 

	cout <<"In Namespace f1: "<<  f2::value() << '\n'; 

	cout <<"In Namespace f1 x: "<< f2::x << '\n';	 
	getch();
	return 0; 
} 

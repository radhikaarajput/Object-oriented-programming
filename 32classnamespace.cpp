#include<conio.h>
#include <iostream> 
using namespace std; 


namespace f1
{ 
	class demo
	{
		 int x;
	
		public:
			demo(int n)
			{
				x=n;
			} 
			
		void display(); 
	}; 
} 

void f1::demo::display() 
{ 
	cout << "Value of x: "<<x; 
} 
 
using namespace f1;

int main() 
{ 
	demo obj(2); 
	obj.display(); 
	getch();
	return 0; 
} 

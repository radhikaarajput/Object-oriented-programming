#include<conio.h>
#include <iostream> 
using namespace std; 
 
namespace  my
{ 
	class student
	{
		public:student()
		{
			cout<<"In student class";
		}
	};
	
}


int main() 
{ 
	using namespace my;
	student s; 
	getch();
	return 1;
} 

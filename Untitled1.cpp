#include<conio.h>
#include <iostream> 
using namespace std; 
 
namespace 
{ 
	class student
	{
		public:student()
		{
			cout<<"In student class";
		}
	};
	
}

namespace B
{ 
	class student2
	{
		public:student2()
		{
			cout<<"In student class AAAAAA";
		}
	};
	
}
int main() 
{ 
	using namespace B;
	student s;
	student2 S; 
	getch();
	return 1;
} 

#include<conio.h>
#include <iostream> 
using namespace std; 
 
namespace m1
{ 
	void show()
	{
		cout<<"My namespace";
	}
	namespace m2
	{
		void show()
		{
			cout<<"My second namespace";
		}
		
	}
}


int main() 
{ 
	using namespace m1::m2;
	show();
	
	/*m1::show();
	cout<<"\n";
	using namespace m1::m2;
	show();*/
	getch();
	return 0; 
} 

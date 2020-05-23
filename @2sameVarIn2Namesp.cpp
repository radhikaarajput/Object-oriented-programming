#include<conio.h>
#include <iostream> 
using namespace std; 
 
namespace first
{ 
	int var=5;
	
}

namespace second
{ 
	double var=3.1416;
	
}

int main() 
{ 
	cout<<first::var<<"\n";
	cout<<second::var;
	getch();
	return 0; 
} 

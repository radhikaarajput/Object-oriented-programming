#include<conio.h>
#include <iostream> 
using namespace std; 
 
namespace TestSpace 
{ 
	int m;
	
	void display(int n) 
	{ 
		cout<<n; 
	} 
}; 


int main() 
{ 
	using namespace TestSpace;
	m=100;
	display(200);
	cout<<endl;
	
	using TestSpace::m;
	m=100;
	cout<<m<<"\n";
	cout<<TestSpace::m<<"\n";

	getch();
	return 0; 
} 

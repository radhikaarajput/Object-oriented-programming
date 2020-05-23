#include<iostream>
#include<conio.h> 
using namespace std; 

class Base 
{ 
public: 
	void dis()
	{
		cout<<"In base";
	}
	virtual void show() = 0; 
}; 

class Derived: public Base 
{ 
public: 
	void show() { cout << "In Derived \n"; } 
}; 

int main(void) 
{ 
	Base *bp = new Derived(); 
	bp->show(); 
	bp->dis();
	getch();
	return 0; 
}

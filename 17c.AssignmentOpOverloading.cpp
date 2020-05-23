#include <iostream> 
#include<conio.h>
using namespace std; 

class coordinate
{
	int x,y;
	public:
		coordinate()
		{
			x=0;
			y=0;
		}
		coordinate(int x0, int y0)
		{
			x=x0;
			y=y0;
		}
		
		int operator =(coordinate obj);
		
		void show();
};

int coordinate::operator=(coordinate obj)
{
	x=obj.x;
	y=obj.y;
}
void coordinate::show()
{
	cout<<"\nValue of x: "<<x;
	cout<<"\nValue of y: "<<y;
}
int main()
{
	coordinate c1(1,2);
	coordinate c2(3,4);
	cout<<"c1 Object";
	c1.show();
	cout<<"\n\nc2 Object";
	c2.show();
	c1=c2;
	cout<<"\n\nc1 Object Now(using assignment operator)";
	c1.show();
	getch();
	return 0;
}

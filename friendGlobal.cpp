#include <iostream>
#include<conio.h>
using namespace std;

class distance;
class speed
{
	int s;
	public:
		speed(int a)
		{
			s=a;	
		}
		
	friend int time(speed x, distance d);
};
class distance
{
	int d;
	public:
		distance(int a)
		{
			d=a;	
		}
		friend int time(speed x, distance d);
};

int time(speed x, distance d)
{
	cout<<"Time is: "<<x.s/b.d;
}
int main()
{
    speed o1(10);
    distance o2(2);
    time(o1,o2);
    getch();
    return 0;
}

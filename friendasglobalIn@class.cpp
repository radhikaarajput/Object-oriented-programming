#include <iostream>
#include<conio.h>
using namespace std;

const int a1=1;

class c2;
class c1
{
	int status;
	public:
		
	void set_status(int s);
	friend int idle(c1 a, c2 b);
};
class c2
{
	int status;
	public:
		void set_status(int s);
		friend int idle(c1 a, c2 b);
		
};

void c1::set_status(int s)
{
	status=s;
}
void c2::set_status(int s)
{
	status=s;
}
int idle(c1 a, c2 b)
{
	if(a.status || b.status)
		return 1;
	else return 0;
}
int main()
{
    c1 o;
    o.set_status(a1);
    c2 o2;
    o2.set_status(a1);
    
    if(idle(o,o2))
    	cout<<"value 1";
    else
    	cout<<"Value 0";
    getch();
    return 0;
}

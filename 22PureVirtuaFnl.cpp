#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class shape
{
	public:
		virtual void area()=0;
		virtual void perimeter()=0;
};
class rectangle: public shape
{
	int l;
	int b;
	int ar;
	int peri;
	public: 
			void set()
			{
				cout<<"\nEnter Length: ";
				cin>>l;
				cout<<"Enter Breath: ";
				cin>>b;
			}
			void area()
			{
				ar=l*b;
				cout<<"Area of rectangle is: "<<ar;
			}
			void perimeter()
			{
				peri=2*(l+b);
				cout<<"\nPerimeter is: "<<peri;
			}
};
class square: public shape
{
	int side;
	int ar;
	int peri;
	public: 
			void set()
			{
				cout<<"\nEnter Side: ";
				cin>>side;
				
			}
			void area()
			{
				ar=side*side;
				cout<<"Area of rectangle is: "<<ar;
			}
			void perimeter()
			{
				peri=4*side;
				cout<<"\nPerimeter is: "<<peri;
			}
};
class circle: public shape
{
	int radius;
	int pi;
	int ar;
	int peri;
	public: 
			void set()
			{
				cout<<"\nEnter radius: ";
				cin>>radius;
			}
			void area()
			{
				pi=3.14;
				ar=pi*radius*radius;
				cout<<"Area of rectangle is: "<<ar;
			}
			void perimeter()
			{
				peri=2*pi*radius;
				cout<<"\nPerimeter is: "<<peri;
			}
};
class triangle: public shape
{
	int s;
	int a,b,c;
	int ar;
	int peri;
	public: 
			void set()
			{
				cout<<"\nEnter 3 side of triangle: ";
				cin>>a>>b>>c;
			}
			void area()
			{
				s = (a+b+c)/2;
				ar=(s*(s-a)*(s-b)*(s-c));
				ar=sqrt(ar);
				cout<<"Area of rectangle is: "<<ar;
			}
			void perimeter()
			{
				peri=a+b+c;
				cout<<"\nPerimeter is: "<<peri;
			}
};
int main()
{
	cout<<"____RECTANGLE_____";
	rectangle r;
	r.set();
	r.area();
	r.perimeter();
	cout<<"\n\n____SQUARE_____";
	square s;
	s.set();
	s.area();
	s.perimeter();
	cout<<"\n\n____CIRCLE_____";
	circle c;
	c.set();
	c.area();
	c.perimeter();
	cout<<"\n\n____TRIANGLE_____";
	triangle t;
	t.set();
	t.area();
	t.perimeter();
	getch();
	return 0;
}

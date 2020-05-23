#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	public: int i;
};
class B : virtual public A
{
	public: int j;
};
class C : virtual public A
{
	public: int k;
};
class D : public B, public C
{
	public: int total;
};
int main()
{
	D d;
	d.i=10;
	cout<<"Enter value of i: ";
	cin>>d.i;
	cout<<"Enter value of j: ";
	cin>>d.j;
	cout<<"Enter value of k: ";
	cin>>d.k;
	d.total=d.i+d.j+d.k;
	cout<<"\nSum is: "<<d.total;
	getch();
	return 0;
}

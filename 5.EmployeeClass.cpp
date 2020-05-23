 #include<conio.h>
#include<iostream>
using namespace std;
class employee
{
	int e_id;
	float e_sal;
	string e_name;
	
	public:
		void set_info();
		void get_info();
};

void employee::set_info()
{
	cout<<"Enter employee id: ";
	cin>>e_id;
	cout<<"Enter employee name: ";
	cin>>e_name;
	cout<<"Enter salary: ";
	cin>>e_sal;
}

void employee::get_info()
{
	cout<<"\nEmployee id: "<<e_id<<endl;
	cout<<"Employee salary: "<<e_sal<<endl;
	cout<<"Employee name: "<<e_name<<endl;
}

int main()
{
	employee e;
	e.set_info();
	e.get_info();
	getch();
}


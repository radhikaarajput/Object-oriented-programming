 #include<conio.h>
#include<iostream>

using namespace std;
class employee
{
	int e_id;
	float e_sal;
	string e_name;
	
	public:
		employee()
		{
			e_id=0;
			e_sal=0;
			 e_name="NULL";
		}
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
	cout<<"1)Using the ‘new’ operator: ";
	employee e = new employee(); 
	e.set_info();
	e.get_info();
	
	cout<<"2) Creating Reference to Existing Object: ";
	employee e1 = new employee(); 
	employee e2;
	e2=e1;
    /*Changes made in the reference e2 
        are reflected in e1 also */
    e2.set_info();
	e1.get_info();
	
	cout<<"3) Creating an Array of objects: ";
		employee[] e3 = new employee[2]; 
		e3[0]=new employee(); 
		e3[1]=new employee(); 
		cout<<"Set details of employee(e3[0])";
		e3[0].set_info();
		cout<<"Set details of employee(e3[0])";
		e3[1].set_info();
		cout<<"Details of employee(e3[0])";
		e3[0].get_info();
		cout<<"Details of employee(e3[1])";
		e3[1].set_info();
		
		
	getch();
}


#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
	char name[50];
	float marks;
	int id;
	public:
		Student()
		{
			marks=0;
			id=0;
		}
		void get_data()
		{
		  cout<<"Enter Student id: ";
          cin>>id;
		  cout<<"Enter Student name: ";
          cin>>name;
          cout<<"Enter Student's marks: ";
          cin>>marks;
          
		}
		void display()
		{
			cout<<"\nStudent Details: ";
			cout<<"\nStudent Name: "<<name;
			cout<<"\nMarks in English: "<<marks;
			cout<<"\nStudent Id: " <<id;
		}
};

int main()
{
	Student obj1,obj2[2];
	
	cout<<"1.Creating an object through class name: \n"; 
	obj1.get_data();
	obj1.display();
	
	cout<<"\n2.Creating an array of objects: \n";
	for( int i=0; i<2; i++ )                            
	{
		cout <<"\nStudent"<<i + 1<<endl;
	    obj2[i].get_data();
	}

	for( int i=0; i<2; i++ )
	{
		cout <<"\n\nStudent"<<i + 1;
		obj2[i].display();
	}
	
	cout<<"\n3.Creating Object through new operator: \n";
	Student *obj3 = new Student();                          
    obj3->get_data();                                         
	obj3->display();
	
	cout<<"\n4.Creating Reference to Existing Object: ";
	Student *obj4 = new Student(); 
	obj4=obj3;                                              //giving ref of obj3 to obj4
    /*Changes made in the reference obj3 are reflected in obj4  also */
    obj3->get_data();
	obj4->display();
	getch();
	return 0;
}

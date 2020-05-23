#include <iostream> 
#include<conio.h>
using namespace std; 
#define size 4

class English
{
	string name;
	int marks;
	
	public: 
			English(int m)
			{
				marks=m;
			}
			
			int My_Marks()
			{
				cout<<"Marks is English: "<<marks<<endl;
			}
			English operator()(int m)
			{
				marks=m;
				return *this;
			}
};

int main()
{
	English e(50);
	e.My_Marks();
	cout<<"\noverloading () operator\n";
	e(40);
	e.My_Marks();
	getch();
	return 0;
	
}

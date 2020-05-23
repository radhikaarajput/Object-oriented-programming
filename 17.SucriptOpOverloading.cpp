#include <iostream> 
#include<conio.h>
using namespace std; 
#define size 4
class Array
{
	int A[size];
	
	public:
		Array()
		{
			int i;
			for(i=0;i<size;i++)
				A[i]=i;
		}
		
		int operator[](int i);
};

int Array:: operator[](int i)
{
	return A[i];
}

int main()
{
	Array obj;
	int i;
	cout<<"Elements of Array: ";
	for(i=0;i<size;i++)
		cout<<obj[i]<<" ";
		
	getch();
	return 0;	
	
}

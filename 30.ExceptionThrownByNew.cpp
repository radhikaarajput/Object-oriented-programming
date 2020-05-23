#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int *p;
	
	try
	{
		p=new int;	
	}
	catch(bad_alloc xa)
	{
		cout<<"\nALLOCATION FAILED";
		exit(0);
	}
	for(*p=0;*p<10;(*p)++)
	{
		cout<<*p<<endl;
	}
	delete p;
	getch();
	return 0;
}

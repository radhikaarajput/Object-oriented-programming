#include<iostream>
#include<conio.h>
using namespace std;
int Area(int side);
int Area(int length, int breath);
int Perimeter(int side);
int Perimeter(int length,int breath);


int main() 
{ 
	
	int a1;
	cout<<"Enter side of Sqaure: ";
	cin>>a1;;
	cout<<"Area of Sqaure"<<Area(a1)<<endl;
	cout<<"Perimeter of Square"<<Perimeter(a1)<<endl;
	
	int a,b;
	cout<<"\n\nEnter Length and Breath of Rectangle: ";
	cin>>a>>b;
	cout<<"Area of Rectangle: "<<Area(a,b)<<endl;
	cout<<"Perimter of Rectangle"<<Perimeter(a,b)<<endl;
	getch();
	return 0; 
} 


int Area(int side)
{
	return side*side;
}

int Area(int length,int breath)
{
	return length*breath;
}

int Perimeter(int side)
{
	return (4*side);
}

int Perimeter(int length,int breath)
{
	return (2*(length+breath));
}

#include <iostream> 
#include<conio.h>
using namespace std; 
//int perimeter(int l,int b=3) ;
int perimeter(int l=2, int b=3) 
{ 
	if(l==2 && b==3)
		cout<<"\nDefault Values of length and breath: "<<l<<" "<<b;
		
	return (2*(l+b)); 
} 


int main() 
{ 
	int l,b;
	cout << "\nPerimeter of Rectangle is: " <<perimeter(); 
	cout<<"\nEnter length and breath is: ";
	cin>>l>>b;
	cout << "\nPerimeter of Rectangle is: " <<perimeter(l,b); 
	getch();
	return 0; 
} 


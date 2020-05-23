#include<iostream> 
#include<conio.h>
using namespace std; 




/* Driver program to test above function*/
int main() 
{ 
	
	cout << sum(10, 15) << endl; 
	cout << sum(10, 15, 25) << endl; 
	cout << sum(10, 15, 25, 30) << endl; 
	getch();
	return 0; 
}

int sum(int x, int y, int z=0, int w=0) 
{ 
	return (x + y + z + w); 
} 

 #include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int a,b,res=0;
	char c,ch;
	
	
	do{
		
		cout<<"Enter two numbers: ";
		cin>>a>>b;
		cout<<"Enter operand: ";
		cin>>c;
	
	switch(c)
	{
		case '+':
			res=a+b;
			break;
		case '-':
			res=a-b;
			break;
		case '*':
			res=a*b;
			break;
		case '%':
			res=a%b;
			break;
		case '/':
			res=a/b;
			break;
		case '^':
			res=a^b;
			break;		
	}
	
	cout<<"Result is: "<<res<<endl;
	cout<<"Want to continue(y/n)"<<endl;
	cin>>ch;
	}while(ch=='y'||ch=='Y');
	getch();
		return 0;
}


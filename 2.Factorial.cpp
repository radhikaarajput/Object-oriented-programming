 #include<iostream>
 #include<conio.h>
 using namespace std;
 int fact(int n);
 int main()
 {
 	int n;
 	cout<<"Enter a number: ";
 	cin>>n;
 	cout<<"Factorial is: "<<fact(n);
 	getch();
	 return 0;
 }
 
 int fact(int n)
 {
 	int i,res=1;
 	for(i=1;i<=n;i++)
 	{
 		res=res*i;
	 }
	 
	 return res;
 }


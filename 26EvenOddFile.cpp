#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	
	ofstream foutEven;
	ofstream foutOdd;
	foutEven.open("even.txt");
	foutOdd.open("odd.txt");
	const int n=80;
	char c='y',num;
	char line[n];
	if(!foutEven)
	{
		cout<<"Error in opening target file..!!";
		foutEven.close();
		getch();
		exit(2);
	}
	if(!foutOdd)
	{
		cout<<"Error in opening target file..!!";
		foutOdd.close();
		getch();
		exit(3);
	}
	while(c=='y'|| c=='Y')
	{
		cout<<"Enter number: ";
		cin>>num;
		if(num%2==0)
		{
			foutEven.put(num);
			foutEven<<endl;
		}
		else
		{
			foutOdd.put(num);
			foutOdd<<endl;
		}
		
		cout<<"Want to enter more: ";
		cin>>c;
	}
	foutEven.close();
	foutOdd.close();
	
	ifstream fin;
	fin.open("even.txt");
	cout<<"\nEven File's content: ";
	if(!fin)
	{
		cout<<"Error in opening target file..!!";
		fin.close();
		getch();
		exit(3);
	}
	while(fin)
	{
		fin.get(c);
		cout<<c;
	}
	ifstream fin2;
	
	fin2.open("odd.txt");
	cout<<"\nOdd File's content: ";
	if(!fin2)
	{
		cout<<"Error in opening target file..!!";
		fin2.close();
		getch();
		exit(3);
	}
	while(fin2)
	{
		fin2.get(c);
		cout<<c;
	}
	fin2.close();
	getch();
	return 0;
}

#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	
	ofstream fout;
	fout.open("user.txt");
	const int n=80;
	char c='y', data,s1[20], file2[20];
	string s;
	char line[n];
	if(!fout)
	{
		cout<<"Error in opening target file..!!";
		fout.close();
		getch();
		exit(2);
	}
	while(c=='y'|| c=='Y')
	{
		cin>>data;
		fout.put(data);
		cout<<"Want to enter more: ";
		cin>>c;
	}
	fout.close();
	
	ifstream fin;
	fin.open("user.txt");
	cout<<"\nFile's content: ";
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
	fin.close();
	getch();
	return 0;
}

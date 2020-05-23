#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("first.txt");
	ofstream fout;
	const int n=80;
	char ch, s1[20], file2[20];
	string s;
	char line[n];

	if(!fin)
	{
		cout<<"Error in opening source file..!!";
		getch();
		exit(1);
	}
	
	fout.open("file2.txt");
	if(!fout)
	{
		cout<<"Error in opening target file..!!";
		fout.close();
		getch();
		exit(2);
	}
	while(fin)
	{
		fin.getline(line,n);
		fout<<line;
		fout<<endl;
	}
	cout<<"File copied successfully..!! \nContent of file2 now: \n";
	fin.close();
	fout.close();
	
	fin.open("file2.txt");

	while(fin)
	{
		fin.getline(line,n);
		cout<<line;
		cout<<endl;
	}
	fin.close();
	getch();
	return 0;
}

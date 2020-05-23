#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("first.txt");
	fout<<"My first page of first.txt file\n";
	fout<<"My first line.\n";
	fout<<"My second line.\n";
	fout<<"My third line.\n";
	fout.close();
	const int n=80;
	char line[n];
	ifstream fin;
	fin.open("first.txt");
	cout<<"File contents: \n";
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

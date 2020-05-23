#include<iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
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

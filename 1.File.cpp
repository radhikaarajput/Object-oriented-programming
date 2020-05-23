#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("firstfile.txt");
	fout<<"My first page\n";
	fout<<"My first line\n";
	fout.close();
	getch();
	return 0;
}

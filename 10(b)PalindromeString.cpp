#include <iostream>
#include<conio.h>
#include<string.h>
using namespace std;

void reverseString(string &S, int i);
string swap(string S, int i, int j) ;

int main()
{
    string S,temp;
    cout << "Enter a string: ";
    cin>>S;
    temp=S;
    reverseString(S,0);
    
    if(temp==S)
    	cout<<"Palindrome String";
    else
		cout<<"Not Palindrome String";
		
    getch();
    return 0;    
}

void reverseString(string &S, int i)
{
    int sizeString= S.length();
	
    if(i==sizeString/2 )
       return;
    
       char temp= S[i]; 
	    S[i]=S[sizeString-i-1]; 
	    S[sizeString-i-1]=temp; 
	    
   		reverseString(S, i + 1); 
    
}

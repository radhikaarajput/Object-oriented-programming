#include<conio.h>
#include<iostream>
using namespace std;
int main(){
	int i,j,result=0;

	for(i=1;i<=1000;i++)
	{ 
	
		for(j=1;j<i;j++)
		{
			if(i%j==0)
				result+=j;
		}
	   	 
	    if(result==i)  	
			cout<<"Perfect No: " <<i<<endl ;
			
		result=0;
		
     }		
     
	getch();
	return 0;
}
 

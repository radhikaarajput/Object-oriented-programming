#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float result,a;
    int choice;
    cout<<"1: Convert temperature from Fahrenheit to Celsius."; 
    cout<<"\n2: Convert temperature from Celsius to Fahrenheit.";
    cout<<"\n3: Convert Height from cm to feet";
    cout<<"\n4: Convert Height from feet to cm";
    cout<<"\n5: Convert Height from cm to inches";
    cout<<"\nEnter your choice 1-4 ";
    cin>>choice;
	switch(choice)
	{
	   		case 1: cout<<"Enter temperature in Fahrenheit: ";
	        cin>>a;
	        result= (a - 32) / 1.8;
	        cout<<"Temperature in Celsius: "<<result;
	        break;
	    
	    case 2: cout<<"\nEnter temperature in Celsius: ";
	          cin>>a;
	        result= (a*1.8)+32;
	        cout<<"Temperature in Fahrenheit: "<<result;
	        break;
	    
	   case 3: cout<<"\nEnter Height in cm: ";
	          cin>>a;
	        result = (30.48/a);
	        cout<<"Height in feet: "<<result;
	        break;
	
		case 4:cout<<"\nEnter height in feet: ";
	        cin>>a;
	        result= (30.48 * a);
	        cout<<"Height in cm: "<<result;
	        break;
	    
	    case 5: cout<<"\nEnter Height in cm: ";
	          cin>>a;
	        result = (0.3937*a);
	        cout<<"Height in inches: "<<result;
	        break;
	         
	    default: cout<<"\nInvalid Choice";
}
    getch();  
	return 0; 
}

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

 #include<iostream>
 #include<conio.h>
 using namespace std;
  
 class vehicle
 {
       int numOfTires;
       int numOfSeats;
       
     public:
             char regId[10];
            
            void setInfoVehicle()
            {
                 cout<<"Enter Registration ID: ";
                 cin>>regId;
                 cout<<"Enter No of tires: ";
                 cin>>numOfTires;
                 cout<<"Enter No of Seats: ";
                 cin>>numOfSeats;   
            }
            
            void getInfoVehicle()
            {
                 cout<<"\nRegistration ID: "<<regId;
                 cout<<"\nNo of tires: "<<numOfTires;
                 cout<<"\nNo of Seats: "<<numOfSeats;
            }
    
 };
 
 class car : public vehicle
 {
       char carCompany[20];
       char carOwner[20];
       
        public:
            
            void setInfoCar()
            {
                 cout<<"Enter Car Company:: ";
                 cin>>carCompany;
                 cout<<"Enter Car Owner: ";
                 cin>>carOwner;
            }
            
            void getInfoCar()
            {
                 cout<<"\nCar Company: "<<carCompany;
                 cout<<"\nCar Owner: "<<carOwner;
            } 
            
 };
     
  class motarCycle : public vehicle
 {
       char motarCycleCompany[20];
       char motarCycleOwner[20];
       
        public:
            
            void setInfoMotarCycle()
            {
                 cout<<"Enter MotarCycle Company: ";
                 cin>>motarCycleCompany;
                 cout<<"Enter MotarCycle Owner: ";
                 cin>>motarCycleOwner;
            }
            
            void getInfoMotarCycle()
            {
                 cout<<"\nMotarCycle Company: "<<motarCycleCompany;
                 cout<<"\nMotarCycle Owner: "<<motarCycleOwner;
            } 
            
 };
           
 int main()
 {
    char r[20];
 	motarCycle m;
 	cout<<"Enter Motarcycle Details: \n";
 	m.setInfoMotarCycle();
 	m.setInfoVehicle();
 	car c;
 	cout<<"\nEnter Car Details: \n";
 	c.setInfoCar();
 	c.setInfoVehicle();
 	cout<<"\n Enter Registration Id for getting information: ";
 	cin>>r;
 	if(m.regId==r)
 	{
     	cout<<"\n\nMotarcycle Details:";
     	m.getInfoMotarCycle();
     	m.getInfoVehicle();
 	}
 	if(c.regId==r)
 	{
 	    cout<<"\n\nCar Details:";
     	c.getInfoCar();
     	c.getInfoVehicle();
 	}
 	getch();
 	return 0;
	
 }
 
 

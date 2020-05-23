 #include<iostream>
 #include<conio.h>
 using namespace std;
 
 
 
 
 class Vehicle
 {
       char regId[10];
       int numOfTires;
       int numOfSeats;
       
     public:
            
            void setInfoVehicle()
            {
                 cout<<"Enter Registration ID: "
                 cin>>regId;
                 cout<<"Enter No of tires: ";
                 cin>>numOfTires;
                 cout<<"Enter No of Seats: ";
                 cin>>numOfSeats;   
            }
            
            void getInfoVehicle()
            {
                 cout<<"Registration ID: "<<regId;
                 cout<<"No of tires: "<<numOfTires;
                 cout<<"No of Seats: "<<numOfSeats;
            }
    
 };
 
 class car : public Vehicle
 {
       char carCompany[20];
       char carOwner[20];
       
        public:
            
            void setInfoCar()
            {
                 cout<<"Enter Car Company:: "
                 cin>>carCompany;
                 cout<<"Enter Car Owner: ";
                 cin>>carOwner;
            }
            
            void getInfoCar()
            {
                 cout<<"Car Company: "<<carCompany;
                 cout<<"Car Owner: "<<carOwner;
            } 
            
 }
     
  class motarCycle : public Vehicle
 {
       char motarCycleCompany[20];
       char motarCycleOwner[20];
       
        public:
            
            void setInfoMotarCycle()
            {
                 cout<<"Enter Car Company:: "
                 cin>>motarCycleCompany;
                 cout<<"Enter Car Owner: ";
                 cin>>motarCycleOwner;
            }
            
            void getInfoMotarCycle()
            {
                 cout<<"Car Company: "<<motarCycleCompany;
                 cout<<"Car Owner: "<<motarCycleOwner;
            } 
            
 }
           
 int main()
 {
 	motarCycle m;
 	m.setInfoMotarCycle();
 	m.setInfoVehicle();
 	m.getInfoMotarCycle();
 	m.getInfoVehicle();
 	getch();
 	getch();
	
 }
 
 

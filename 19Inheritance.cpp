#include<iostream>
#include<conio.h>
using namespace std;

class vehicle{
       int numOfTires;
       string regId;
     public:
            void setInfoVehicle(){
                 cout<<"Enter Registration ID: ";
                 cin>>regId;
                 
                 cout<<"Enter No of Tires: ";
                 cin>>numOfTires;   
            } 
            void getInfoVehicle(){
                 cout<<"\nRegistration ID: "<<regId;
                 cout<<"\nNo of tires: "<<numOfTires;
            }    
 };
  
 
 class FourWheeler: public vehicle{
       int numOfSeats;
       int Vid;
     public:
            void setInfoFourWheeler(){
                 cout<<"Enter Vehicle ID: ";
                 cin>>Vid;
                 cout<<"Enter No of Seats: ";
                 cin>>numOfSeats;   
            } 
            void getInfoFourWheeler(){
                 cout<<"\nVehicle ID: "<<Vid;
                 cout<<"\nNo of Seats: "<<numOfSeats;
            }    
 };
 class car : public FourWheeler
 {
       char carCompany[20];
       char carOwner[20];
        public:
            void setInfoCar(){
                 cout<<"Enter car Company :: ";
                 cin>>carCompany;
                 cout<<"Enter Owner: ";
                 cin>>carOwner;
            }
            void getInfoCar(){
                 cout<<"\nCar Company: "<<carCompany;
                 cout<<"\nCar Owner: "<<carOwner;
            } 
            
 };  
 
 class Insurance
 {
       char Company;
       int id;
        public:
            void setInfoInsurance(){
                 cout<<"Enter Company:: ";
                 cin>>Company;
                 cout<<"Enter Id: ";
                 cin>>id;
            }
            void getInfoInsurance(){
                 cout<<"\nCompany: "<<Company;
                 cout<<"\nID: "<<id;
            } 
            
 }; 
  
  class Truck : public FourWheeler,public Insurance
 {
       char TruckCompany[20];
       char TruckOwner[20];
        public:
            void setInfoTruck(){
                 cout<<"Enter Truck Company:: ";
                 cin>>TruckCompany;
                 cout<<"Enter Truck Owner: ";
                 cin>>TruckOwner;
            }
            void getInfoTruck(){
                 cout<<"\nTruck Company: "<<TruckCompany;
                 cout<<"\nTruck Owner: "<<TruckOwner;
            } 
            
 }; 
         
 int main(){
		
	FourWheeler f;
	cout<<"Enter Details: \n";
	f.setInfoVehicle();	
	f.setInfoFourWheeler();
	cout<<"\nDetails: (Single Inheritance) ";
	f.getInfoVehicle();	
	f.getInfoFourWheeler();
	
 	car c;
 	cout<<"\n\nEnter Car Details: \n";
 	c.setInfoVehicle();
 	c.setInfoFourWheeler();
 	c.setInfoCar();
 	cout<<"\nCar Details: (Multilevel Inheritance) ";
    c.getInfoVehicle();
 	c.getInfoFourWheeler();
 	c.getInfoCar();
    
    Truck t;
    cout<<"\n\nEnter Truck Details: \n";
    t.setInfoVehicle();
    t.setInfoFourWheeler();
    t.setInfoTruck();
    t.setInfoInsurance();
    cout<<"\nTruck Details: (Multiple Inheritance) ";
    t.getInfoVehicle();
    t.getInfoFourWheeler();
    t.getInfoTruck();
    t.getInfoInsurance();
    
 	getch();
 	return 0;
 }

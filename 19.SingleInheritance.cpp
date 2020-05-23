#include<iostream>
#include<conio.h>
using namespace std;
class vehicle{
       int numOfTires;
       int numOfSeats;
       string regId;
     public:
            void setInfoVehicle(){
                 cout<<"Enter Registration ID: ";
                 cin>>regId;
                 cout<<"Enter No of tires: ";
                 cin>>numOfTires;
                 cout<<"Enter No of Seats: ";
                 cin>>numOfSeats;   
            } 
            void getInfoVehicle(){
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
            void setInfoCar(){
                 cout<<"Enter Car Company:: ";
                 cin>>carCompany;
                 cout<<"Enter Car Owner: ";
                 cin>>carOwner;
            }
            void getInfoCar(){
                 cout<<"\nCar Company: "<<carCompany;
                 cout<<"\nCar Owner: "<<carOwner;
            } 
            
 };             
 int main(){
 	car c;
 	cout<<"Enter Car Details: \n";
 	c.setInfoCar();
 	c.setInfoVehicle();
 	cout<<"\nCar Details:";
    c.getInfoCar();
    c.getInfoVehicle();
 	getch();
 	return 0;
 }

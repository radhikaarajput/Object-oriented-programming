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
                 cout<<"Enter No of tires: ";
                 cin>>numOfTires;
                  
            } 
            void getInfoVehicle(){
                 cout<<"\nRegistration ID: "<<regId;
                 cout<<"\nNo of tires: "<<numOfTires;
			}
 }; 
class FourVehicle{
       int numOfSeats;
       int Vid;
     public:
            void setInfoFourVehicle(){
                 cout<<"Enter Vehicle ID: ";
                 cin>>Vid;
                 cout<<"Enter No of Seats: ";
                 cin>>numOfSeats;   
            } 
            void getInfoFourVehicle(){
                 cout<<"\nVehicle ID: "<<Vid;
                 cout<<"\nNo of Seats: "<<numOfSeats;
            }    
 };
 class car : public vehicle,public FourVehicle
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
 	c.setInfoVehicle();
 	c.setInfoFourVehicle();
 	c.setInfoCar();
 	cout<<"\nCar Details:";
 	c.getInfoVehicle();
 	c.getInfoFourVehicle();
    c.getInfoCar();
 	getch();
 	return 0;
 }

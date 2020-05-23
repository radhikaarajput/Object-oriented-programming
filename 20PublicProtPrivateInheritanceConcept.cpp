#include<iostream>  
#include<conio.h>
using namespace std;
class base {
  int x;
   
  protected : int a;
  
 public:
	int b;
  void setx(int n) 
  {
  	  x = n; 
  	  a= n+1;
  } 
  void showx( ) 
  { 
	cout<<"Base Class Function\n";
   	 cout<<"x: "<<x<<"\n";
   	 cout<<"a: "<<a<<"\n";
   }
}; 
// Inherit as public 
class derived1 : public base {
  int y; 
 public:
  void sety(int n)
   {
    	 y = n; 
    	 a= n*2;
    	 b=n*3;
     } 
  void showy( )
   { 
	  cout<<"\nDerived Class Function\n";
	  //cout<<"x: "<<x<<"\n";
   	  cout<<"y: "<<y<<"\n";
   	  cout<<"a: "<<a<<"\n";
   	  cout<<"b: "<<b<<"\n";
   	  
    }
};

class derived2 : protected base {
  int y; 
 public:
  void sety(int n)
   {
    	 y = n; 
    	 a= n*2;
    	 b=n*3;
     } 
  void showy( )
   { 
	  cout<<"\nDerived Class Function\n";
   	  cout<<"y: "<<y<<"\n";
   	  cout<<"a: "<<a<<"\n";
   	  cout<<"b: "<<b<<"\n";
    }
};

class derived3 : private base {
  int y; 
 public:
  void sety(int n)
   {
    	 y = n; 
    	 a= n*2;
    	 b=n*3;
    	 
     } 
  void showy( )
   {
	  cout<<"\nDerived Class Function\n"; 
   	  cout<<"y: "<<y<<"\n";
   	  cout<<"a: "<<a<<"\n";
   	  cout<<"b: "<<b<<"\n";
   	  
    }
};
int main() 
{
	
	cout<<"Public derivation  ";
	cout<<"\nx not accessbile (private)";
	cout<<"\na accessible in derived class in memeber functions(proteced)\n";
  	derived1 ob;
  	ob.b=0;
  	cout<<"\nb can be aacess directly outside base class also";
  	cout<<"\nValue of b: "<<ob.b<<endl;
  	ob.setx(10);  // access member of base class
  	ob.sety(20);  // access member of derived class
	ob.showx( );  // access member of base class 
 	ob.showy( );  // access member of derived class
 	 
 	cout<<"\n\nProteceted derivation  ";
	cout<<"\nx not accessbile (private)";
  	cout<<"\nb cannot be aacess directly outside base class now as b protected now";
  	cout<<"\na and b accessible in derived class in memeber functions(proteced)\n";
  	derived2 d;
  	cout<<"Cannot acess method of base now directly";
  //	d.setx(10);  // cannot access member of base class
  	d.sety(20);  // cannot access member of derived class
//	d.showx( );  // access member of base class 
 	d.showy( );  // access member of derived class
 	
 	cout<<"\n\nPrivate derivation  ";
	cout<<"\nx not accessbile (private)";
  	cout<<"\na, b cannot be aacess directly outside base class now as b public now";
  	cout<<"\na and b not accessible in derived class in memeber functions\n";
  	derived3 f;
  	cout<<"Cannot acess method of base now directly";
  //	d.setx(10);  // cannot access member of base class
  	f.sety(20);  // cannot access member of derived class
//	d.showx( );  // access member of base class 
 	f.showy( );
 	getch();
 	return 0;
 	 
} 

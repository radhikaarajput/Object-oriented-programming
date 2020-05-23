#include<iostream>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unisd.h>
#include<conio.h>
using namespace std;

int main()
{ char buff[50];
  int n;
  int fd1=open("source.txt",O_RDONLY);
  int fd2=open("target.txt",O_WRONLY || O_CREAT);
  if(fd1<0)
    cout<<"\n source.txt not opened successfully.......";
  if(fd2<0)
    cout<<"\n target.txt not opened successfully.......";
    
  while((n=read(fd1,buff,50))>0)
   { write(fd2,buff,n);
   }  
  write(fd1,"\0",1);
  
  if(n<0)
    cout<<"\n File could not read the content.......";
  close(fd1);
  close(fd2);
  
  fd2=open("target.txt",O_RDONLY);
  cout<<"\n File copied successfully.....\n Content copied : \n\t";
  while((n=read(fd2,buff,49))>0)
   { buff[49]='\0';
     cout<<buff;
   
   }
   getch();  	 
  return 0; 
  
}

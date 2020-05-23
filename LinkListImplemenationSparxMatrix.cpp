#include<stdio>
#include<conio.h>
int r,c;
typedef struct row nd1;
typedef struct column nd2;

struct column
{
	int cno;
	int val;
	struct column* colptr;
	
}

struct row
{
	int rno;
	struct row* rowlink;
	struct column* colLink;
}*p;

struct row* create()
{
	int r1,c1;
	cout<<"Enter row no: ";
	cin>>r1;
	cout<<"Enter col no: ";
	cin>>c1;
	if(r1<r)
	{
		if(p==NULL)
		{
			nd1 *nod =(nd1*)malloc(sizeof(nd1));
				if(nod==NULL)
		        {
					printf("Overflow");
					return;
		        }	
		        else
		        {
					nod->rno=r1;
					nod->rowlink=NULL;
					nod->colLink=NULL;
				}
		}	
	}
	else
		cout<<"Cannot Enter";
		
		if(c1<c)
		{
				if(p==NULL)
				{
					nd2 *nod2 =(nd2*)malloc(sizeof(nd2));
					if(nod2==NULL)
			        {
						printf("Overflow");
						return;
			        }	
			        else
			        {
						nod2->cno=c1;
						nod->rowlink=NULL;
						nod->colLink=NULL;
					}
			}	
		}
	
}
void main()
{
	
	cout<<"Enter row no: ";
	cin>>r;
	cout<<"Enter col no: ";
	cin>>c;
	p=create();
}

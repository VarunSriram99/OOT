#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
class EMPLOYEE
{	public:
	int empcode;
	char empname[20];
	EMPLOYEE():empcode(0)
	{}
	void getdata()
	{
		cout<<"Enter the employee code";
		cin>>empcode;
		getchar();
		cout<<"Enter the name";
		fgets(empname,20,stdin);
	}
	void display()
	{
		cout<<"\nName:\t";
		puts(empname);
		cout<<"\nemployee code:\t";
		cout<<empcode;
	}
};
int main()
{
	EMPLOYEE e[10];
	int k=0,i,a,ch;
	do
	{
		cout<<"Do you want to\n1. Enter\n2. Display";
		cin>>ch;
		if(ch==1)
		{
			e[k].getdata();
			k++;
		}
		if(ch==2)
		{
			for(i=0;i<k;i++)
			{
				cout<<e[i].empcode<<"\t"<<e[i].empname<<"\n";
			}
		}
	cout<<"Do you want to continue?(1/0)";
	cin>>a;
	}while(a==1);
	return 0;
}

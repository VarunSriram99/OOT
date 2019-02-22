#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
class EMPLOYEE
{	public:
	int empcode,basic;
	char empname[20];
	EMPLOYEE():empcode(0),basic(0)
	{}
	void getdata()
	{
		cout<<"Enter the employee code";
		cin>>empcode;
		getchar();
		cout<<"Enter the name";
		fgets(empname,20,stdin);
		cout<<"Enter the basic salary";
		cin>>basic;
	}
	void display()
	{
		float da,gs,it,ns;
		cout<<"\nName:";
		puts(empname);
		cout<<"\temployee code:";
		cout<<empcode;
		cout<<"\tbasic:"<<basic;
		da=basic*52/100;
		cout<<"\tda:"<<da;
		gs=basic+da;
		cout<<"\tGross salary:"<<gs;
		it=gs*30/100;
		cout<<"\tIncome tax:"<<it;
		ns=gs-it;
		cout<<"\tNet salary:"<<ns;
		cout<<"\n";
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
				e[i].display();
			}
		}
	cout<<"Do you want to continue?(1/0)";
	cin>>a;
	}while(a==1);
	return 0;
}

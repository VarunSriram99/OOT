#include<iostream>
using namespace std;
class Employee
{
public:
	int age,id,basicpay,experience;
	char name[20],designation[20];
	Employee()
	{
		cout<<"Enter the employee id:";
		cin>>id;
		cout<<"Enter the age:";
		cin>>age;
		getchar();
		cout<<"Enter the name:";
		fgets(name,20,stdin);
		getchar();
		cout<<"Enter the designation:";
		fgets(designation,20,stdin);
		
		cout<<"Enter the basic pay";
		cin>>basicpay;
		cout<<"Enter the experience";
		cin>>experience;
		cout<<"\n\n\n\n\n\n\n";
		cout<<"ID="<<id<<"\n";
		cout<<"Name=";puts(name);
		cout<<"\ndesignation=";puts(designation);
		cout<<"\nAge="<<age;
		cout<<"\nBasic pay="<< basicpay;
	}
};
class otherincome: public virtual Employee
{
public:
	int income;
	char source[20];
	otherincome()
	{
		cout<<"\nEnter the income:";
		cin>> income;
		getchar();
		cout<<"\nEnter the source:";
		fgets(source,20,stdin);
		cout<<"\n\n\n\n\n\n\n";
		cout<<"Income="<<income<<"\n";

		cout<<"\nSource=";puts(source);
	}
};
class increment: public virtual Employee
{
public:
	int incr;
increment()
	{
		if(experience>25)
		{
			incr=5000;
		}
		else
		{
			incr=2000;
		}
	}
};
class netsalary:public otherincome, public increment
{
public:
	int ns;
	netsalary()
	{
		ns=incr+income+basicpay;
		cout<<"\n\n\n\nNet salary="<<ns;
	}
};
int main()
{
	netsalary n;
	return 0;
}
#include<iostream>
using namespace std;
class Employee
{
protected:
	char name[100];
	int experience,salary;
public:
	void getdata()
	{
		getchar();
		cout<<"Enter the name, experience, salary";
		fgets(name,100,stdin);
		cin>>experience>>salary;
	}

	
};
class Department:public Employee
{
public:
	char dept_name[50];
	void read()
	{
		cout<<"Enter the department name";
		getchar();
		fgets(dept_name,50,stdin);

	}

	
};
class Senior: public Department
{
public:
	void ans()
	{
		cout<<"name=";
		puts(name);
		cout<<"\nexperience="<<experience<<"\nsalary="<<salary<<"\nname=";
		puts(dept_name);
		cout<<"\n\n\n\n\n";
	}
	void printans()
	{
		if(experience>10)
		{
			cout<<"Name=";
			puts(name);
			cout<<"Experience="<<experience<<"\nSalary="<<salary<<"\nDepartment=";
			puts(dept_name);
		}
	}

};
int main(int argc, char const *argv[])
{
	int ch;
	Senior s[5];
	for(int i=0;i<5;i++)
	{
		s[i].getdata();
		s[i].read();
	}
	do
	{
		cout<<"1.print all Employee details\n2.print senior details";
		cin>>ch;
		if(ch==1)
		{
			for (int i = 0; i < 5; ++i)
			{
			s[i].ans();
			}
		}
		if(ch==2)
		{
			for (int i = 0; i < 5; ++i)
			{
			s[i].printans();
			}
		}
	}while(ch==1 || ch==2);	
	return 0;
}
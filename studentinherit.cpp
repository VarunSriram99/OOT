#include<iostream>
using namespace std;
class student
{
	public:
	int rollno;
	void accept()
	{
		cout<<"Enter roll number";
		cin>>rollno;
	}
};
class test: public virtual student
{
	public:
	int mark[3];
	void accept_t()
	{
		cout<<"Enter 3 marks";
		cin>>mark[0]>>mark[1]>>mark[2];
	}
};
class sports: public virtual student
{
	public:
	int weightage;
	void accept_s()
	{
		cout<<"Enter the weightage";
		cin>>weightage;
	}
};
class result:public test, public sports
{
	public:
	void print()
	{
		cout<<rollno<<"\t\t"<<(mark[0]+mark[1]+mark[2]+weightage)<<"\n";
	}
};
int main()
{
int n,i;
result r[20];
cout<<"Enter the no of students";
cin>>n;
for(i=0;i<n;i++)
{
	cout<<"\nEnter the details of student "<<i+1<<":";
	r[i].accept();
	r[i].accept_t();
	r[i].accept_s();
}
cout<<"\n\n\n\n\n\n\n";
cout<<"roll no"<<"\t\t"<<"total marks"<<"\n";
cout<<"-------------------------------------------------------------"<<"\n";
for(i=0;i<n;i++)
	r[i].print();
return 0;
}

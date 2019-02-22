#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
class student
{	public:
	int usn,mark[3];
	char name[20];
	student():usn(0)
	{}
	void getdata()
	{
		cout<<"Enter the usn";
		cin>>usn;
		getchar();
		cout<<"Enter the name";
		fgets(name,20,stdin);
		cout<<"Enter the mark 1";
		cin>>mark[0];
		cout<<"Enter the mark 2";
		cin>>mark[1];
		cout<<"Enter the mark 3";
		cin>>mark[2];
	}
	void display()
	{
		int avg,max1,max2;
		cout<<"\nName:";
		puts(name);
		cout<<"\tusn:";
		cout<<usn;
		if(mark[0]>mark[1] && mark[0]>mark[2])
		{
			max1=mark[0];
			if(mark[1]>mark[2])
				max2=mark[1];
			else
				max2=mark[2];
		}
		else if(mark[1]>mark[0] && mark[1]>mark[2])
		{
			max1=mark[1];
			if(mark[0]>mark[2])
				max2=mark[0];
			else
				max2=mark[2];
		}
		else if(mark[2]>mark[1] && mark[2]>mark[0])
		{
			max1=mark[2];
			if(mark[0]>mark[1])
				max2=mark[0];
			else
				max2=mark[1];
		}
		avg=(max1+max2)/2;
		cout<<"\taverage marks:";
		cout<<avg;
		cout<<"\n";
	}
};
int main()
{
	student e[10];
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

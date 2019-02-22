#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
class Bank
{	public:
	int accno,balance;
	char name[20],type[20];
	Bank():balance(0),accno(0)
	{}
	void deposit(Bank a[])
	{
		int temp,amnt,i;
		cout<<"Enter the account number";
		cin>>temp;
		for(i=0;i<10;i++)
		{
			if(a[i].accno==temp)
			{
				cout<<"Enter the amount to be inserted";
				cin>>amnt;
				a[i].balance=a[i].balance+amnt;
				cout<<"\nSuccess";
				break;
			}
			else
				cout<<"Failed- Account number not found";
		}
	}
	void withdraw(Bank a[])
	{
		int temp,amnt,i;
		cout<<"Enter the account number";
		cin>>temp;
		for(i=0;i<10;i++)
		{
			if(a[i].accno==temp)
			{
				cout<<"Enter the amount to be withdraw";
				cin>>amnt;
				cout<<amnt;
				if(amnt<a[i].balance)
				{
					a[i].balance-=amnt;
					cout<<"\nSuccess";
				}
				else
					cout<<"\n Failed Insufficient Balance";
				break;
			}
			else
				cout<<"Failed- Account number not found";
		}
	}
	void display(Bank a[])
	{
		int temp,i;
		cout<<"Enter the account no";
		cin>>temp;
		for(i=0;i<2;i++)
		{
			if(temp==a[i].accno)
				break;
		}
		cout<<"\nName:\t";
		puts(a[i].name);
		cout<<"\naccount type:\t";
		puts(a[i].type);
		cout<<"\nBalance:\t"<<a[i].balance;
	}
};
int main()
{
	int ch,n;
	Bank b[10];
	for(int i=0;i<2;i++)
	{
		cout<<"Enter the account number of customer "<<i+1;
		cin>>b[i].accno;
		getchar();
		cout<<"Enter the account type of customer "<<i+1;
		fgets(b[i].type,20,stdin);
		cout<<"Enter the name of customer "<<i+1;
		fgets(b[i].name,20,stdin);
	}
	for(int i=0;i<2;i++)
	{
		cout<<"\nAccount number of customer "<<i+1<<" is "<<b[i].accno;
		cout<<"\nAccount type of customer "<<i+1<<" is ";
		puts(b[i].type);
		cout<<"\nThe name of customer "<<i+1<<" is ";
		puts(b[i].name);
	}
	do
	{
		cout<<"What do you want to perform\n1.Deposit\n2.Withdraw\n3.Display\nEnter:";
		cin>>ch;
		if(ch==1)
		b[3].deposit(b);
		else if(ch==2)
		b[3].withdraw(b);
		else if(ch==3)
		b[3].display(b);
		else
		cout<<"Invalid choice";
		cout<<"Do you want to perform another operation?(1/0)";
		cin>>n;
	}while(n==1);
	return 0;
}

#include<iostream>
#include<string.h>
using namespace std;
class account
{
	public:
	int accno;
	char name[20], type;
	void accept()
	{
		cout<<"Enter account number";
		cin>>accno;
		getchar();
		cout<<"Enter the account holder name";
		fgets(name,20,stdin);
		getchar();
		cout<<"Enter the account type";
		cin>>type;
	}
};
class cur_acct: public virtual  account
{
	public:
	int balance_c=0;

};
class sav_acct: public virtual account
{
	public:
	int balance_s=0;

};
class calculate: public cur_acct, public sav_acct
{
	public:
	void deposit()
	{
		int amnt;
		cout<<"Enter amount to be deposited:";
		cin>>amnt;
		if(type=='s')
		{
			balance_s+=amnt;
			cout<<"Amount deposited";
		}
		else if(type=='c')
		{
			balance_c+=amnt;
			cout<<"Amount deposited";
		}
		else
			cout<<"Invalid account type";
	}
	void withdraw()
	{
		int amnt;
		cout<<"Enter amount to be withdrawn:";
		cin>>amnt;
		if(type=='s')
		{
			if(amnt<balance_s)
			{
				balance_s-=amnt;
				cout<<"Amount withdrawn";
			}
		}
		else if(type=='c')
		{
			if(amnt<balance_c)
			{
				balance_c-=amnt;
				cout<<"Amount withdrawn";
			}
		}
		else
			cout<<"Invalid account type";
	}
	void interest()
	{
		if(type=='s')
		{
			balance_s+=(balance_s*6.5)/100;
		}
		else if(type=='c')
		{
			balance_c+=(balance_c*8.5)/100;
		}
		else
			cout<<"Invalid account type";
	}
	void print()
	{
		if(type=='s')
		{
			cout<<"account number:"<<accno<<"\n";
			puts(name);
			cout<<type;
			cout<<balance_s<<"\n";
		}	
		if(type=='c')
		{
			cout<<"account number:"<<accno<<"\n";
			puts(name);
			cout<<type;
			cout<<balance_c<<"\n";
		}
		else
			cout<<"Invalid account type";	
	}
};
int main()
{
int n,i,ch,temp;
calculate c[20];
cout<<"Enter the no of accounts";
cin>>n;
for(i=0;i<n;i++)
{
	cout<<"\nEnter the details of account "<<i+1<<":";
	c[i].accept();

}
cout<<"\n\n\n\n\n\n\n";
do
{
cout<<"1. deposit\n2. withdraw\n3. display\n4. interest\n5. exit";
cin>>ch;
if(ch==1)
{
	cout<<"Enter the accno";
	cin>>temp;
	getchar();
	for(i=0;i<n;i++)
		if(temp==c[i].accno)
			break;
	c[i].deposit();
}
if(ch==2)
{
	cout<<"Enter the accno";
	cin>>temp;
	getchar();
	for(i=0;i<n;i++)
		if(temp==c[i].accno)
			break;
	c[i].withdraw();
}
if(ch==3)
{
	cout<<"Enter the accno";
	cin>>temp;
	getchar();
	for(i=0;i<n;i++)
		if(temp==c[i].accno)
		{	c[i].print();
			break;
		}
}
if(ch==4)
{
	cout<<"Enter the accno";
	cin>>temp;
	getchar();
	for(i=0;i<n;i++)
		if(temp==c[i].accno)
			break;
	c[i].interest();
}
if(ch==5)
	cout<<"Good bye...";
}while(ch!=5);
return 0;
}

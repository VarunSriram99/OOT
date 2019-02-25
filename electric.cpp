#include<iostream>
#include<stdio.h>
using namespace std;
class Electric
{
	public:
	float amnt;
	int unit;
	char name[20];
	Electric():amnt(50),unit(0)
	{}
	void accept()
	{
		cout<<"Enter the name";
		fgets(name,20,stdin);
		cout<<"Enter the no of units";
		cin>>unit;

	}
	void print()
	{
		int units=unit;
		if(units<=100)
			amnt+=units*0.60;
		else if(units>100 && units<=300)
			{
				amnt+=100*0.60;
				units-=100;
				amnt+=units*0.80;
			}
		else if(units>300)
			{
				amnt+=100*0.60;
				units-=300;
				amnt+=200*0.80;
				amnt+=units*0.90;
			}
		if(amnt>300)
			amnt+=amnt*15/100;
		cout<<"Name= ";
		puts(name);
		cout<<"Units consumed= "<<unit;
		cout<<"\n\nAmount= "<<amnt;
	}
};
int main()
{
	Electric e;
	e.accept();
	e.print();
	return 0;
}

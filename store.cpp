#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
class store
{	public:
	int code,price;
	store():code(0),price()
	{}
	void getdata()
	{
		cout<<"Enter the code";
		cin>>code;
		getchar();
		cout<<"Enter the price";
		cin>>price;
	}
	void display()
	{
		cout<<"code:";
		cout<<code;
		cout<<"\tprice:";
		cout<<price;
		cout<<"\n";
	}
};
int main()
{
	store e[10];
	int k=0,i,j,a,ch,sum=0,temp;
	do
	{
		cout<<"Do you want to\n1. Enter\n2. delete\n3. Display";
		cin>>ch;
		if(ch==1)
		{
			e[k].getdata();
			k++;
		}
		if(ch==3)
		{
			sum=0;
			for(int i=0;i<k;i++)
			{
				e[i].display();
				sum=sum+e[i].price;
			}
			cout<<"total sum"<<sum;
		}
		if(ch==2)
		{
			cout<<"Enter the code:";
			cin>>temp;
			for(i=0;i<k;i++)
			{
				if(e[i].code==temp)
				{
					for(j=i;j<k;j++)
					{
						
						e[j].code=e[j+1].code;
						e[j].price=e[j+1].price;
						k--;
					}
					break;
				}
		}}
	cout<<"Do you want to continue?(1/0)";
	cin>>a;
	}while(a==1);
	return 0;
}

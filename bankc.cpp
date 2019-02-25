#include<iostream>
using namespace std;
class Bank
{
	public:
	int count;
	Bank():count(0)
	{}
	Bank operator ++()
	{
		count++;	
	}
	Bank operator --()
	{
		count--;	
	}
	void display()
	{
		cout<<"Current no of staff="<<count;
	}
};
int main()
{
	Bank b;
	int ch;
	do
	{
		cout<<"Press \n1.Enter\n2.Exit\n3.Display\n4.Stop";
		cin>>ch;
		if(ch==1)
			++b;
		if(ch==2)
			--b;
		if(ch==3)
			b.display();
	}while(ch!=4);
	return 0;
}

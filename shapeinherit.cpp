#include<iostream>
using namespace std;
class dim
{
	public:
	int b,h;
	void accept()
	{
		cout<<"Enter data:";
		cin>>b>>h;
	}
};
class rectangle:public dim
{
	public:
	int ar;
	void calcr()
	{
		ar=b*h;
		cout<<"Area of rectangle is "<<ar;
	}
};
class triangle:public dim
{
	public:
	double area;
	void calct()
	{
		area=0.5*b*h;
		cout<<"Area of trangle is "<<area;
	}
};
int main()
{
	int ch;
	cout<<"Enter the shape \n1.triangle\n2.rectangle";
	cin>>ch;
	if(ch==1)
	{
		triangle t;
		t.accept();
		t.calct();
	}
	if(ch==2)
	{
		rectangle r;
		r.accept();
		r.calcr();
	}
return 0;
}

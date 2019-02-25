#include<iostream>
using namespace std;
class Complex
{
	public:
	int r,i;
	Complex():r(0),i(0)
	{}
	Complex operator +(Complex z)
	{
		Complex temp;
		temp.r=z.r+r;
		temp.i=z.i+i;
		return temp;
	}
	void accept()
	{
		cout<<"Enter the real part";
		cin>>r;
		cout<<"Enter the imaginary part";
		cin>>i;
	}
	void print()
	{
		cout<<"The complex no is    "<<r<<" + "<<i<<"i";
	}
};
int main()
{
	Complex c1,c2,c3,c4;
	c1.accept();
	c2.accept();
	c3.accept();
	c4=c1+c2+c3;
	c4.print();
	return 0;
}

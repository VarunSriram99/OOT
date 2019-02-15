#include<iostream>
#include<cmath>
using namespace std;
class Quad
{
	float x,y,d;
	public:
	void root(int a,int b,int c)
	{
		d=(b*b)-(4*a*c);
		if(d>0)
		{
			cout<<"Roots are real and distinct\n";
			x=((-b)+sqrt(d))/(2*a);
			y=((-b)-sqrt(d))/(2*a);
			cout<<"Root 1="<<x<<"\nRoot 2="<<y;
		}
		else if(d<0)
		{
			cout<<"Roots are imaginary and distinct\n";
			cout<<"Root 1=(-"<<b<<"+ "<<sqrt(-d)<<"i)/"<<(2*a);
			cout<<"\nRoot 2=(-"<<b<<"- "<<sqrt(-d)<<"i)/"<<(2*a);
		}
		else
		{
			cout<<"Roots are real and equal\n";
			x=(-b)/(2*a);
			cout<<"Root 1= Root 2= "<<x;
		}
	}
};
int main()
{
	int a,b,c;
	cout<<"Enter the coefficient of x^2:";
	cin>>a;
	cout<<"Enter the coefficient of x:";
	cin>>b;
	cout<<"Enter the constant:";
	cin>>c;
	Quad Q;
	Q.root(a,b,c);
	return 0;
}

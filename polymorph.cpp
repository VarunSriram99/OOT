#include <iostream>
#include<cmath>
using namespace std;
class triangle
{
public:
	float ar,s;
	void area(int b, int h)
	{
		ar=0.5*b*h;
		cout<<ar;
	}
		void area(int ar1)
	{
		ar=(sqrt(3)/2)*ar1*ar1;
		cout<<ar;
	}
		void area(int a,int b, int c)
	{
		s=(a+b+c)/2;
		ar=sqrt(s*(s-a)*(s-b)*(s-c));
		cout<<ar;
	}
};
int main()
{
	int ch;
	triangle t;
	cout<<"Do you want\n1.isoceles\n2.equilateral\n3.scalene";
	cin>>ch;
	if(ch==1)
	{
		int b,h;
		cout<<"Enter the base and height";
		cin>>b>>h;
		t.area(b,h);
	}
		if(ch==2)
	{
		int ar1;
		cout<<"Enter the side";
		cin>>ar1;
		t.area(ar1);
	}
		if(ch==3)
	{
		int a,b,c;
		cout<<"Enter the three sides";
		cin>>a>>b>>c;
		t.area(a,b,c);
	}
	return 0;
}
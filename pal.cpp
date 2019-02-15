#include<iostream>
using namespace std;
class Pal
{
	int p=0;
	public:
	void check(int n)
	{
		for(int i=n;i!=0;i=i/10)
		{
			p=(p*10)+i%10;
		}
		if(p==n)
			cout<<"The number is a paliandrome";
		else
			cout<<"The number is not a paliandrome";
	}
};
int main()
{
	int n;
	cout<<"Enter the number:";
	cin>>n;
	Pal P;
	P.check(n);
	return 0;
}

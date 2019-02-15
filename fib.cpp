#include<iostream>
using namespace std;
class Fib
{
	int a=0,b=1;
	public:
	void fibo(int n)
	{
		int c;
		cout<<a<<" "<<b;
		for(int i=3;i<=n;i++)
		{
			c=a+b;
			cout<<" "<<c;
			a=b;
			b=c;
		}
	}
};
int main()
{
	int n;
	cout<<"Enter the limit:";
	cin>>n;
	Fib F;
	F.fibo(n);
	return 0;
}

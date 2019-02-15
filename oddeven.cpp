#include<iostream>
using namespace std;
class Oddeven
{
	public:
	void check(int n)
	{
		if(n%2==0)
			cout<<"The number is even";
		else
			cout<<"The number is odd";
	}
};
int main()
{
	int n;
	cout<<"Enter the number:";
	cin>>n;
	Oddeven O;
	O.check(n);
	return 0;
}

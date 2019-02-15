#include<iostream>
using namespace std;
class Prime
{
	public:
	void pri(int a,int b)
	{
		int i,j;
		for(i=a;i<b;i++)
		{
			for(j=2;j<=(i/2);j++)
				{
					if(i%j==0)
						break;
				}
			if(j>i/2)
				cout<<i<<" ";
		}
	}
};
int main()
{
	int a,b;
	cout<<"Enter the Lower limit:";
	cin>>a;
	cout<<"Enter the Upper limit:";
	cin>>b;
	Prime P;
	P.pri(a,b);
	return 0;
}

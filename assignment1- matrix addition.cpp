#include <iostream>
using namespace std;
int m,n;//m is the row size and n is the column size
class arr
{
public:
	int a[20][20];//array for accepting the matrices
	void accept()
	{
		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cin>>a[i][j];//accepting the matrix elements
			}
		}
	}
	arr operator + (arr t)// operator overloading --> arr t is the matrix for object b
	{
		int i=0,j=0;
		arr temp;// temporary object for storing sum matrix
		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				temp.a[i][j]=a[i][j]+t.a[i][j];//sum calculated here
			}
		}
		return temp;
	}
	void print()// printing the matrix
	{
		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cout<<a[i][j]<<"\t";
			}
			cout<<"\n";
		}
	}
};
int main()
{
	cout<<"Enter the row and column size";
	cin>>m>>n;// row and column size accepted here
	arr a,b,c;
	cout<<"Enter the elements of first matrix\n";
	a.accept();// accepting the forst matrix
	cout<<"Enter the elements of second matrix\n";
	b.accept();// accepting the second matrix
	c=a+b;
	cout<<"The sum of matrices is:\n";
	c.print();
	return 0;
}
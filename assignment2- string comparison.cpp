#include <iostream>
#include<string.h>
using namespace std;
class str
{
public:
	char a[100];// string variable for all objects
	void accept()
	{
		fgets(a,100,stdin);// accepting string
	}
	int operator == (str t)// operator overloading --> t is the object corresponding to the object b
	{
		return strcmp(a,t.a);// string comparison returns 0 if strings are equal
	}
	void print(int a)// compared string answer accepted here(0 or not)
	{
		if(a==0)
			cout<<"Strings are the same/equal";
		else
			cout<<"Strings aren't the same/equal";
	}
};
int main()
{
	str a,b;// objects for strings a and b
	cout<<"Enter the first string\n";
	a.accept();// first string accepted here
	cout<<"Enter the second string\n";
	b.accept();// second string accepted here
	b.print(a==b);// string comparison called here
	return 0;
}
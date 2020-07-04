/*
Program to print 1-100 numbers without any Control statment(Without Recursion).
*/
#include<iostream>
using std::cout;
class Count
{
		static int k;
	public:
		Count()
		{
			cout<<k++<<"\t\t ";
		}
};
int Count::k=1;
main()
{
	Count c[100];
	cout<<"\n\n";
}


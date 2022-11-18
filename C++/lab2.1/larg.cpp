#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter any three numbers:";
	cin>>a>>b>>c;
	if(a>b)
	{
		if(a>c)
		{
		cout<<"A is the largest.";
		}
		else
		{
		cout<<"C is the largest.";
		}
	}
	else
	{
		if(b>c)
		{
		cout<<"B is the largest.";
		}
		else
		{
		cout<<"C is the largest.";
		}
	}
}

#include<iostream>
using namespace std;
int main()
{
	char oper;
	int x,y;
	float z;
	cout<<"Enter any operators:";
	cin>>oper;
	cout<<"Enter any two numbers:";
	cin>>x >>y ;
	switch(oper)
	{
		case '+':
		z= x+y;
		cout<< "X + Y ="<< z;
		break;
		
		case '-':
		z= x-y;
		cout<< "X - Y ="<< z;
		break;
		
		case '*':
		z= x*y;
		cout<< "X * Y ="<< z;
		break;
		
		case '/':
		z= x/y;
		cout<< "X / Y ="<< z;
		break;
		
	}
}

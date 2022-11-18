#include<iostream>
#define PI 3.1415
using namespace std;
int main()
{
	int r,area,peri;
	cout<<"Enter the radious of the circle:";
	cin>>r;
	area= PI*r*r;
	peri= 2*PI*r;
	cout<<"The area of the circle is:"<<area<<endl;
	cout<<"The perimeter of the circle is:"<<peri;
	return 0;
}
	

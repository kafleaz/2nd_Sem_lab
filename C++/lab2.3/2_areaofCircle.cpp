#include<iostream>
#define PI 3.14
using namespace std;
float areaOfCircle();
int main()
{
    int a,b;
    cout<<"Enter the radius of circle 1 "<<areaOfCircle()<<"\n";
    
    cout<<"Enter the radius of circle 2 "<<areaOfCircle();
    // areaOfCircle();
    // cout<<"The area of circle 1 is "<<areaOfCircle();;
}
float areaOfCircle()
{
    float r;
    float area;
    cin>>r;
    area = PI*r*r;
    cout<<"The are of circle is ";
    return area;
}
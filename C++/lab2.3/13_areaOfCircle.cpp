#include<iostream>
#define PI 3.14
using namespace std;
inline float areaOfCircle(int r);
int main()
{
    int r;
    cout<<"Enter the radius of circle ";
    cin>>r;
    cout<<"The area of circle is "<<areaOfCircle(r)<<endl;
}
float areaOfCircle(int r)
{
    float area;
    area = PI*r*r;
    return area;
}
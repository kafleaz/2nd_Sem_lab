#include<iostream>
using namespace std;
int sum(float a, int b);
int main()
{
    int n;
    float f;
    cout<<"Enter the float and integer value ";
    cin>>f>>n;
    cout<<"The product of input id "<<sum(f,n);
    return 0;
}
int sum(float a, int b)
{
    int p;
    p = a * b;
    return p;
}